/*Escreva um programa em C que receba um valor inteiro e diga se ele é múltiplo de 5.*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    /* code */
    int x;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    if( x % 5 == 0)
    {
        printf("O número %d é multiplo de 5", x);
    }else
    printf("\n O número %d não é multiṕlo de 5", x);


    return 0;
}

