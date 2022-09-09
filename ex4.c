/*
A imobiliária Central vende apenas terrenos retangulares. Faça um algoritmo para ler as 
dimensões de um terreno e depois exibir a área do terreno.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    /* code */
    float area, comprimento, largura;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o valor do comprimento (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite o valor da largura (em metros): ");
    scanf("%f", &largura);

    area = comprimento*largura;
    
    printf("\tO terreno possui %.1f metros quadrados de área\n", area);

    return 0;
}


