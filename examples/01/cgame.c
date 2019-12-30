#include <stdio.h>

int main(int argc, char *argv[]){
  printf("Hello World\n");
  printf("Args count %d\n", argc);
  if(argc > 1){
    int x = 1;
    for(x = 1; x < argc; x++ ){
      printf("Args %s\n", argv[x]);
    }
  }
  
  return 0;
}

