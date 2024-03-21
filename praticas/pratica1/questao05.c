/*5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).*/

#include <stdio.h>
int main() {

  long int valor_gigabyte;
  printf("Digite o Valor de gigabytes");
  scanf("%li",&valor_gigabyte);

  long int conversao = (valor_gigabyte*1024*1024*1024);
  

  printf("O Valor em bytes é:%li\n",conversao);
  return 0;
}