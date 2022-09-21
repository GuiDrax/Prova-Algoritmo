#include <stdio.h>

int main(){

  struct{
  char nome[50], email[50], tel[15];
  }Digitos;
  int total1=0,total2 = 0,total3 = 0;
  printf("Insira um nome: ");
  scanf("%s", Digitos.nome);
  printf("Insira um e-mail: ");
  scanf("%s", Digitos.email);
  printf("Insira um telefone: ");
  scanf("%s", Digitos.tel);
  printf("----------------------------------------\n");
  while (Digitos.nome[total1] != '\0'){
    total1++;
  }
  printf("Nome: %d dígitos\n", total1);
  while (Digitos.email[total2] != '\0'){
    total2++;
  }
  printf("E-mail: %d dígitos\n", total2);
  while (Digitos.tel[total3] != '\0'){
    total3++;
  }
  printf("Telefone: %d dígitos\n", total3);

  return 0;
}

