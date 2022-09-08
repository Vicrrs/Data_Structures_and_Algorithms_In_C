/*
Crie um programa que leia um valor de hora e informe quantos minutos se passaram
desde o início do dia.
*/

#include<stdio.h>
/*arquivo de cabeçalho onde se encontra as funções printf e scanf*/
#include<locale.h>
/*arquivo de cabeçalho onde se encontra a função setlocale que
 faz com que a função printf() mostre na tela(ecrã), os caracteres da Língua
 Portuguesa como á,ã,ç,ú,etc.*/
int main() {
  int horas, minutos;

  setlocale(LC_ALL, "portuguese");

  printf("Qual a hora atual (formato 24)? \n");
  scanf("%d\n", &horas);

  minutos = (horas * 60);

  printf("Desde o inicio do dia até a hora informada jáse passaram %.d minutos\n", minutos);

  return 0;
}
