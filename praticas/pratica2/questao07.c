/*Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.*/
#include <stdio.h>

int main() {

  float valor_da_hora_de_trabalho = 150.00f;
  float total_de_horas_trabalhadas = 100.0f; 
  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previdencia = salario_bruto * INSS;

  float salario_liquido = salario_bruto - imposto_renda - imposto_previdencia;

  printf("\x1b[33m--------------------------\n");
  printf("  C O N T R A  C H E Q U E\n");
  printf("--------------------------\x1b[0m\n");
  printf("\x1b[34mSalário Bruto....:R$ %-6.2f\x1b[0m\n",salario_bruto);
  printf("\x1b[31mImposto Renda....:R$ %-6.2f\n",imposto_renda);
  printf("Imposto Previ....:R$ %-6.2f\x1b[0m\n",imposto_previdencia);
  printf("\x1b[32mSalário Líquido..:R$ %-6.2f\n",salario_liquido);
  
  return 0;
  
}