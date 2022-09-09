/*
Escreva um programa para ler uma temperatura dada na escala Fahrenheit e exibir o 
equivalente em Celsius. C=5/9 *(F-32)
*/

#include<stdio.h>
int main()
{
    /* Declarando as váriaveis */
    float temperatura_F, Temperatura_C;

    /*Entrada de dados*/
    printf("Informe a temperatura na escala Fahrenheit: ");
    scanf("%f", &temperatura_F);

    /*Processamento de dados*/
    Temperatura_C = 0.555555555*(temperatura_F-32);
    /*Mostrando o resultado*/
    printf("\n Temperatura em graus Celsius=%.2f\n", Temperatura_C);

    return 0;
}

