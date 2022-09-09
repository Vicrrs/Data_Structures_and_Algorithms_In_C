/*Escreva um programa que leia um número inteiro positivo e exiba o dobro do mesmo.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int numero;

    printf("\n Informe um número: ");
    scanf("%d", &numero);

    printf("\n Dobro de %d é %d", numero, numero*2);


    return 0;
}
