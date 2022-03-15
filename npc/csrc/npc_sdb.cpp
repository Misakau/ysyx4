#include <stdio.h>
#include <cassert>
#include <getopt.h>

void set_batch_mode();

int npc_parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
//    {"diff"     , no_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bh", table, NULL)) != -1) {
    switch (o) {
      case 'b': set_batch_mode(); break;
      //case 'd': diff_so_file = optarg; break;
      case 1: printf("val = 1\n");
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        //printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
    }
  }
  return 0;
}