/*2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.*/

#include <stdio.h>

int main() {

  int num_1;
  int num_2;
  printf("Digite um número inteiro para divisão:");
  int remover = scanf("%i",&num_1);
  printf("Digite um segundo número inteiro");
  remover = scanf("%i",&num_2);

  int divisao = num_1/num_2;
  printf("Quociente:%i\n",divisao);
  int resto = num_1%num_2;
  printf("O resto é:%i\n",resto);
  

  return 0;
}