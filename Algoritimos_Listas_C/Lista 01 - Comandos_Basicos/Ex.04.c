#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 04!\n\n");

    char nome[20];
    printf ("Indique seu nome: ");
    scanf ("%s", nome);

    int idade;
    printf ("\nIndique sua idade: ");
    scanf ("%d", &idade);

    int dias_de_vida = idade * 365;

    printf ("\nOla %s, voce tem %d anos de idade e ja viveu %d dias de vida\n", nome, idade, dias_de_vida);


    return 0;
}
