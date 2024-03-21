/*Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.*/

#include <stdio.h>

int main(){
  
  float preco_inicial;
  
  printf("Digite o Preço:");
  scanf("%f",&preco_inicial);
  
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP)* preco_inicial;

 
  
  float preco_icms = preco_inicial * ICMS;
  float preco_cofins = preco_inicial * COFINS;
  float preco_pis_pasep = preco_inicial * PIS_PASEP;

  printf("Valor ICMS = %2.2f\n",preco_icms);
  printf("Valor COFINS = %2.2f\n",preco_cofins);
  printf("Valor PIS/PASEP = %2.2f\n",preco_pis_pasep);
  printf("Preco final =%2.2f\n",preco_final);
  
  return 0;
}