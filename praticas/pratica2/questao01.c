/*1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.*/

#include <stdio.h>

int main() {

  int num_1;
  int num_2;
  int num_3;

  printf("Digite o Primeiro Número");
  scanf("%i",&num_1);
  printf("Digite o Segundo Número");
  scanf("%i",&num_2);
  printf("Digite o Terceiro Número");
  scanf("%i",&num_3);

  int media = (num_1+num_2+num_3)/3;
  printf("A média aritmética é:%i",media);


  
  return 0;
}
