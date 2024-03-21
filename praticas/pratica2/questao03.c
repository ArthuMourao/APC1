/*3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).*/

#include <stdio.h>

int main() {

  float temperatura_c;
  printf("Digite uma temperatura em Graus Celsius:");
  int remover = scanf("%f",&temperatura_c);

  float conversao = (9/5*temperatura_c+32);
  printf("O Valor de %2.2f °C em Fahrenheit é:%2.2f\n",temperatura_c,conversao);
    

  return 0;
}