#include <stdio.h>

int stoiN(char str[], int i){
  
}

int main(){
  int h,w;
  fscanf(stdin,"%d %d\n",&h,&w);

  if(h < 1|| h > 50 || w < 1 || w > 50){
    fprintf(stdout,"NO\n");
    return 0;
  }
  printf("(h,w)=(%d,%d)\n",h,w);

  char sheet[h+1][w];
  char getline[w+1];
  int i;

  for(i=0;i <= h;i++){
    fgets(getline,w+2,stdin);
    fprintf(stdout,"%s",getline);
    //printf("%d %d\n",i ,h);
  }

}
