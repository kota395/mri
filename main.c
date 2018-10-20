#include<stdio.h>
#include <stdlib.h>

int main(){

}

int file_io(char *filename,char *base_sheet){
  FILE *fp;
  char ch;

  if ((fp = fopen(filename, "r")) == NULL) {
    fprintf(stderr, "%sのオープンに失敗しました.\n", filename);
    exit(EXIT_FAILURE);
  }
  
  while (( ch = fgetc(fp)) != EOF ) {
    putchar(ch);
  }
  
  fclose(fp);
}

char *symbol_to_meaning(char ch){
  char *meaning;
  
  return meaning;
}


