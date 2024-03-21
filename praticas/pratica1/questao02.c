/*2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.*/
#include <stdio.h>

int main(){
  float base;
  float altura;

  printf("Digite o valor da Base:\n");
  int remover_erro = scanf("%f",&base);
  printf("Digite o valor da altura:\n");
  remover_erro = scanf("%f",&altura);
  
  float area = base * altura /2;

  printf("A área do triangulo é %2.2f\n",area);
  
  return 0;
}