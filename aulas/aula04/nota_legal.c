#include <stdio.h>

int main() {

  char nome[31];
  int quantidade;
  float valor;
  
  printf("Digite o nome do produto:");
  int deu_certo = scanf("%[^\n]s",nome);

  printf("Digite a quantidade do produto:");
  deu_certo = scanf("%i",&quantidade);

  printf("Digite o valor do produto:\n");
  deu_certo = scanf("%f",&valor);

  printf("\x1b[33m-------------------------\n");
  printf("   N O T A  L E G A L\n");
  printf("-------------------------\n\x1b[0m");
  printf("\x1b[32mITEM          QTD VALOR\x1b[0m\n");
  printf("\x1b[34m%-13s %03i %5.2f\n",nome,quantidade,valor);
  return 0;

  
}