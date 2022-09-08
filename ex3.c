/*Crie um programa para ler 3 notas e mostrar a média delas.*/

#include<stdio.h>
int main(int argc, char const *argv[]) {
  float soma, nota1, nota2, nota3, media;
  soma = 0;
  media = 0;

    printf("\tDigite a [1ª] nota: ");
    scanf("%f", &nota1);

    printf("\tDigite a [2ª] nota: ");
    scanf("%f", &nota2);

    printf("\tDigite a [3ª] nota: ");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    media = soma/3;

    printf("Média = %.1f\n", media);


  return 0;
}
