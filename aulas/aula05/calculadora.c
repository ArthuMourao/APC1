#include <stdio.h>
#include <math.h>

int main() {

  int numero_1;
  int numero_2;

  printf("Entre com o primeiro número:");
  int deu_certo = scanf("%i",&numero_1);
  
  printf("Entre com o segundo número");
  deu_certo = scanf("%i",&numero_2);

  int soma = numero_1 + numero_2;
  printf("A soma dos números é: %i\n",soma);

  int subtracao = numero_1 - numero_2;
  printf("A diferença entre os números é:%i\n ",subtracao);

  int multiplicacao = numero_1 * numero_2;
  printf("O produto entre os números é:%i\n",multiplicacao);

  float divisao = 1.0f * numero_1 / numero_2;
  printf("O quociente entre os números é:%2.2f\n",divisao);

  int resto = numero_1 % numero_2;
  printf("O resto é %i\n",resto);

  //numero_1 = numero_1 = 1
  //incremento
  printf("O incremento do primeiro número é:%i\n",numero_1++);
  printf("O incremento do segundo número é:%i\n",++numero_1);
  
  //numero_1 =numero_1 - 1
  //decremento
  printf("O decremento do primeiro número é:%i\n",numero_1--);
  printf("O decremento do primeiro número é:%i\n",--numero_1);

  double raiz_quadrada = sqrt(numero_1);
  printf("A Raiz quadrada do primeiro número é:%f\n",raiz_quadrada);

  double potencia = pow(numero_1,3);
  printf("A 3ª potência do primeiro número é:%f\n",potencia);

  double logaritmo2 = log2(numero_1);
  printf("O logaritmo na base 2 do primeiro número é:%f\n",logaritmo2);

  const double PI = 3.1416;
  
  double seno = sin(numero_1*(PI/180));
  printf("O seno do primeiro número é:%f\n",seno);

  double cosseno = cos(numero_1*(PI/180));
  printf("O cosseno do primeiro número é:%f\n",cosseno);

  

  
  

  
  return 0;
}