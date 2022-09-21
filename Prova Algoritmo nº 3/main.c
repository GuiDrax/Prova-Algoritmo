#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int dia, mes, ano, num1, num2;
  printf("Insira sua data de nascimento (dd mm aaaa): ");
  scanf("%d %d %d", &dia, &mes, &ano);
  num1 = dia*100+mes;
  num2 = num1 + ano;
  num1 = num2%100;
  num2 = (num2-num1)/100;
  num1 += num2;
  num1 = num1%5;
  switch (num1){
  case 0:
    printf("O seu perfil é Tímido");
    break;
  case 1:
    printf("O seu perfil é Sonhador");
    break;
  case 2:
    printf("O seu perfil é Paquerador");
    break;
  case 3:
    printf("O seu perfil é Atraente");
    break;
  case 4:
    printf("O seu perfil é Irresistível");
    break;
  }
  
  return 0;
}