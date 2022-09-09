/*Faça um programa em C que receba(leia) o nome de um usuário e imprima na tela.*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    char nome[30];
    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin); /*Para ler a string*/
    printf("-------Nome Digitado: ");
    puts(nome); /*Mostrar a string*/

    return 0;
}

