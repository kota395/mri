#include <stdio.h>

int stoiN(char str[], int i){
  
}

int main(){
  int h,w;
  fscanf(stdin,"%d %d",&h,&w);

  if(h > 50 || w > 50){
    fprintf(stdout,"NO\n");
    return 0;
  }

  printf("h=%d w=%d\n",h,w);

}
