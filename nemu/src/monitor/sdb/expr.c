#include <isa.h>
#include <memory/vaddr.h>


/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, 
  TK_EQ=254,TK_AND=253,TK_NEQ=252,TK_P=251,
  TK_HEX=250,TK_REG=249,
/*  TK_PLUS='+';
  TK_MINU='-';
  TK_MUL='*';
  TK_DIV='/';
  TK_LPA='(';
  TK_RPA=")";
*/
  TK_DINT='0',
  TK_NEG=255,
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},  // spaces
  {"0x(0|1|2|3|4|5|6|7|8|9|a|b|c|d|e|f|A|B|C|D|E|F)+",TK_HEX},
  {"(0|1|2|3|4|5|6|7|8|9)+",TK_DINT},
  {"\\+", '+'},         // plus
  {"-",'-'},
  //{"(\\+|-|\\*|/)*-",TK_NEG},  
  {"\\*",'*'},
  {"/",'/'},
  {"\\(",'('},
  {"\\)",')'},//
  {"==", TK_EQ},  // equal
  {"!=",TK_NEQ},
  {"&&",TK_AND},
  {"\\$(\\$0|ra|sp|gp|tp|t(0|1|2|3|4|5|6)|s(0|1|2|3|4|5|6|7|8|9|10|11)|a(0|1|2|3|4|5|6|7)|mepc|mstatus|mcause|mtvec|satp)",TK_REG},
//  {"0x(0|1|2|3|4|5|6|7|8|9|a|b|c|d|e|f|A|B|C|D|E|F)+",TK_HEX},
};

//"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
//   "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
//   "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
//   "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
//const char *REGS[]={
//		"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
//		"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
//		"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
//		"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
//};


#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[65535] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
//printf("nr_token= %d\n",nr_token);
        switch (rules[i].token_type) {
		  case 256:
			break;
		  case TK_EQ:
			tokens[++nr_token].type=TK_EQ;
			break;
		  case TK_NEQ:
			tokens[++nr_token].type=TK_NEQ;
			break;
		  case TK_AND:
			tokens[++nr_token].type=TK_AND;
			break;
		  case '+':
		    tokens[++nr_token].type='+';
		    break;
		  case '-':
			if(nr_token==0) tokens[++nr_token].type=TK_NEG;
			else{
			  int typ=tokens[nr_token].type;
			  if(typ==')'||typ=='0'||typ==TK_REG||typ==TK_HEX)
			  	tokens[++nr_token].type='-';
			  else tokens[++nr_token].type=TK_NEG;
			}
			break;
		  case '*':
			if(nr_token==0) tokens[++nr_token].type=TK_P;
			else{
			  int typ=tokens[nr_token].type;
			  if(typ==')'||typ=='0'||typ==TK_REG||typ==TK_HEX)
                 tokens[++nr_token].type='*';
              else tokens[++nr_token].type=TK_P;
			}
			break;
		  case '/':
			tokens[++nr_token].type='/';
		    break;
		  case '(':
			tokens[++nr_token].type='(';
			break;
		  case ')':
			tokens[++nr_token].type=')';
			break;
		  case '0':
		    tokens[++nr_token].type='0';
			if(substr_len>=32) assert(0);
			memset(tokens[nr_token].str,0,sizeof(tokens[nr_token].str));
			for(int tmp=0;tmp<substr_len;tmp++)
			  tokens[nr_token].str[tmp]=substr_start[tmp];
			break;
		  case TK_HEX:
			 tokens[++nr_token].type=TK_HEX;
             if(substr_len>=32) assert(0);
             memset(tokens[nr_token].str,0,sizeof(tokens[nr_token].str));
             for(int tmp=2;tmp<substr_len;tmp++)
               tokens[nr_token].str[tmp-2]=substr_start[tmp];
             break;
     	  case TK_REG:
             tokens[++nr_token].type=TK_REG;
             if(substr_len>=32) assert(0);
             memset(tokens[nr_token].str,0,sizeof(tokens[nr_token].str));
			 for(int tmp=1;tmp<substr_len;tmp++)
			   tokens[nr_token].str[tmp-1]=substr_start[tmp];
             break;

          default: TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

int find_primop(int p,int q){
 int prio[257];
 prio['(']=10;prio[')']=10;prio['0']=10;prio[TK_HEX]=10;prio[TK_REG]=10;
 prio[TK_AND]=1;
 prio[TK_EQ]=2;prio[TK_NEQ]=2;
 prio['+']=3;prio['-']=3;
 prio['*']=4;prio['/']=4;
 prio[TK_NEG]=9;prio[TK_P]=9;
 int stop=0;
 int opp=p;
 for(int i=p;i<=q;i++){
  int opt=tokens[i].type;
  if(opt==')') stop--;
  if(opt=='(') stop++;
  if(stop!=0) continue;
  if(opt=='+'||opt=='-'||opt=='*'||opt=='/'||opt==TK_NEG||opt==TK_P||opt==TK_AND||opt==TK_EQ||opt==TK_NEQ){
    if(prio[opt]<=prio[tokens[opp].type]){
	  if(prio[opt]==prio[tokens[opp].type]&&tokens[opp].type==TK_NEG)
		continue;
	  else opp=i;
	}
  }
 }
 return opp;
}
bool check_parentheses(int p,int q,bool *suc){
  int stop=0;bool popt=false;
  if(q-p==1&&tokens[p].type=='('&&tokens[q].type==')'){
   *suc=false;
   return false;
  }
  for(int i=p;i<=q;i++){
	if(i>p&&stop==0) popt=true; //failed
    if(tokens[i].type=='(') stop++;
	if(tokens[i].type==')') stop--;
	if(stop<0) break;
  }
  if(stop==0){
	*suc=true;
	if(popt) return false;
	else return true;
  }
  else{
    *suc=false;
	return false;
  }
  // can only judge whether the parentheses is matched;
}

word_t eval(int p,int q,bool *succ){
//  printf("(%d,%d)\n",p,q);
  if(*succ==false) return 0;
  if(p>q){
  	return 0;//bad expression
  }
  else if(p==q){
    //single token
	if(tokens[p].type=='0'){
  	  word_t val=0;
      int l=strlen(tokens[p].str);
      for(int i=0;i<l;i++)
        val=val*10+tokens[p].str[i]-'0';
      return val;
	}
	else if(tokens[p].type==TK_HEX){
      word_t val=0;
      int l=strlen(tokens[p].str);
      for(int i=0;i<l;i++){
        val<<=4;
	    char hh=tokens[p].str[i];
		if(hh>='0'&&hh<='9') val=val+hh-'0';
		else if(hh>='a'&&hh<='f') val=val+hh-'a'+10;
		else val=val+hh-'A'+10;
	  }
      return val;
	}
	else if(tokens[p].type==TK_REG){
	  word_t val=0;
	  bool ff=true;
	  val=isa_reg_str2val(tokens[p].str,&ff);
	  printf("%lu, %d\n",val,ff);
	  if(ff) return val;
	  else{
		*succ=false;
		return 0;
	  }
	}
	else{
	  *succ=false;
	  return 0;
	}
// printf("the value at position %d is:%s\n",p,tokens[p].str);  

  }
  else if(check_parentheses(p,q,succ)==true){
    return eval(p+1,q-1,succ);
  }
  else{
    if(*succ==false) return 0;
//	printf("xx\n");
	int op=find_primop(p,q);
	int op_type=tokens[op].type;
	word_t val1=0,val2;
//	printf("op in <%d,%d> is :%c\n",p,q,tokens[op].type);
	if(op_type!=TK_NEG && op_type!=TK_P){
	  val1=eval(p,op-1,succ);
	  if(*succ==false) return 0;
	}
	 val2=eval(op+1,q,succ);
	 if(val2==0&&op_type=='/') *succ=false;
	if(*succ==false) return 0;
//	printf("the val1 of (%d,%d) is:%u\n",p,op-1,val1);
//	printf("the val2 of (%d,%d) is:%u\n",op+1,q,val2); 
	switch (op_type){
	  case '+': return val1+val2;
	  case '-': return val1-val2;
	  case '*': return val1*val2;
	  case '/': return val1/val2;
	  case TK_NEG: return -val2;
	  case TK_AND: return val1&&val2;
	  case TK_EQ: return val1==val2;
	  case TK_NEQ: return val1!=val2;
	  case TK_P: return vaddr_read(val2,8);
	  default: *succ=false; return 0;		   
	}
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
//
//for(int i=1;i<=nr_token;i++) printf("<%d>\n",tokens[i].type);
//
  bool ok=false;
  for(int i=1;i<=nr_token;i++) if(tokens[i].type=='0'||tokens[i].type==TK_REG||tokens[i].type==TK_HEX) ok=true;
  if(ok==false){
  	*success=false;return 0;
  }
  return eval(1,nr_token,success);
  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
