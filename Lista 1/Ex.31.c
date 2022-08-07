#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 31! \n\n");
    float peso_inicial, novo_peso_engorda, novo_peso_emagrece;
    printf ("Insira seu peso atual (em Kg): ");
    scanf ("%f", &peso_inicial);
    novo_peso_engorda = peso_inicial * 1.15;
    novo_peso_emagrece = peso_inicial * 0.8;
    printf ("\nCaso voce engorde 15%, seu novo peso sera de %.2fKg.", novo_peso_engorda);
    printf ("\nCaso voce emagreca 20%, seu novo peso sera de %.2fKg.\n", novo_peso_emagrece);
    return 0;
}
