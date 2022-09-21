#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tab(n1, n2){
  for (n2; n2 <= 10; n2++){
    printf("%d x %d = %d\n", n1, n2, n1*n2);
  }
}

int main(){

  int num=0, fat=1;
  printf("Digite um numero positivo: \n");
  scanf("%d", &num);
  for (num; num > 0; num--){
    printf("-------------\n");
    tab(num, fat);
  }

  return 0;
}
