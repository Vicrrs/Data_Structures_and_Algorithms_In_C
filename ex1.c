/*Para vários tributos, a base de cálculo é o salário mínimo. Fazer um programa
que leia o valor do salário mínimo e o valor do salário de uma pessoa. Calcular
e imprimir quantos salários mínimos ela ganha.*/

#include<stdio.h> /*arquivo de cabeçalho responsavel pela entrada e saida de
dados*/

int main() {
  /* code */
  float salario_min, salario_pessoa, qtd_sal_min;

  printf("Informe o valor do salário mínimo \n R$: ");
  scanf("%f", &salario_min);

  printf("Informe o valor do salario recebido pela pessoa \n R$: ");
  scanf("%f", &salario_pessoa);

  qtd_sal_min = (salario_pessoa/salario_min);

  printf("Uma pessoa que ganha um salario de R$%.2f recebe %.1f salarios minimos\n", salario_pessoa, qtd_sal_min);

  return 0;
}
