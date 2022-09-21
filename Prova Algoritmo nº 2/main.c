#include <stdio.h>
#include <stdlib.h>

int main(){

  int num=0, f1=1, f2=1, r=0;
  printf("Insira um número >= 3: ");
  scanf("%d", &num);
  printf("1,1");
  num -= 2;
  for ( num; num > 0; num--){
    r = f1 + f2;
    f1 = f2;
    f2 = r;
    printf(",%d", r);
  }
  
  return 0;
}


