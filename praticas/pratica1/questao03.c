/*3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r^2). Considere o raio um número inteiro e a constante PI igual a 3,1416.*/

#include <stdio.h>

int main() {
  float pi = 3.1416;
  float raio;
  printf("Digite o Raio da pizza a ser calculado\n");
  scanf("%f",&raio);

  float calculo = (2*pi*raio);
  printf("O perímetro da pizza é:%2.2f\n",calculo);
  

  return 0;
}