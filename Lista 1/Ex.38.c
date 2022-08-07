#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 38! \n\n");
    int ano_nascimento, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;

    printf("Indique seu ano de nascimento: ");
    scanf ("%d", &ano_nascimento);
    printf ("Indique o ano atual: ");
    scanf ("%d", &ano_atual);
    idade_anos = ano_atual - ano_nascimento;
    idade_meses = idade_anos * 12;
    idade_dias = idade_meses * 30;
    idade_semanas = idade_dias/7;
    printf ("\nVoce tem %d anos de vida, %d meses de vida, %d dias de vidas ou %d semanas de vida.\n", idade_anos, idade_meses, idade_dias, idade_semanas);


    return 0;
}
