/*6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).*/
#include <stdio.h>
#include <math.h>

int main() {

  int a;
  int b;
  int c;

  printf("Digite o valor de A:");
  int deu_certo = scanf("%i",&a);
  printf("Digite o valor de B:");
  deu_certo = scanf("%i",&b);
  printf("Digite o valor de C:");
  deu_certo = scanf("%i",&c);

  double delta = pow(b,2)-4*a*c;
  double raiz_pos = (-b + sqrt(delta)) / (2*a);
  printf("Raiz positiva é:%f\n",raiz_pos);
  double raiz_neg = (-b - sqrt(delta)) / (2*a);
  printf("Raiz negativa é:%f\n",raiz_neg);

  

 
  





  return 0;
}