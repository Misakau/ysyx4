#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char point_name[32];
  uint64_t oldval;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = &wp_pool[i + 1];
  }
  wp_pool[NR_WP - 1].next = NULL;

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char* s,word_t val){
	WP *pos=free_;
	if(pos==NULL){
		printf("NO FREE WATCHPOINT!\n");
		assert(0);
	}
	free_=free_->next;
	pos->next=head;
	head=pos;
	pos->oldval=val;
	memset(pos->point_name,0,sizeof(pos->point_name));
	strcpy(pos->point_name,s);
}
void free_wp(word_t N,int *success){
  WP* wp=head;
  if(wp==NULL){
  	*success=0;
	return;
  }
  while(wp!=NULL&&wp->NO!=N) wp=wp->next;
  if(wp==NULL){
    *success=1;
    return;
  }
  if(wp->next==NULL){
    head=NULL;
	return;
  }
  WP* pos=head;
  while(pos->next!=wp) pos=pos->next;
  pos->next=wp->next;
  wp->next=free_;
  free_=wp;
}
void display_wp(){
  printf("Num\tExpr\tValue\t\n");
  WP* po=head;
  while(po!=NULL){
    printf("%d\t%s\t%lu\t\n",po->NO,po->point_name,po->oldval);
    po=po->next;
  }
}

void scan_wp(){
   WP* poss=head;
   while(poss!=NULL){
     bool ff=true;
     word_t newval=expr(poss->point_name,&ff);
     assert(ff);
     if(newval!=poss->oldval){
         nemu_state.state=NEMU_STOP;
         printf("Wathchpoint: %s\nOld value:\n%lu\nNew value:\n%lu\n",poss->point_name,poss->oldval,newval);
         poss->oldval=newval;
     }
     poss=poss->next;
   }
}
