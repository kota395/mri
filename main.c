#include<stdio.h>
#include <stdlib.h>

int main(){
  char base_sheet[300][300];
  char *filename = "input_data.txt";
  FILE *fp;
  char ch;

  if ((fp = fopen(filename, "r")) == NULL) {
    fprintf(stderr, "%sのオープンに失敗しました.\n", filename);
    exit(EXIT_FAILURE);
  }
 
  int base_x = 0;
  int base_y = 0;
  while (( ch = fgetc(fp)) != EOF ) {
    putchar(ch);
    if(ch != "\n"){
      base_sheet[base_x][base_y] = ch;
      base_x++;
    }
  }
  
  fclose(fp);
}

char *symbol_to_meaning(char ch){
  char *meaning;
  
  return meaning;
}


