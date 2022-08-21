#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 26 \n\n");
    float num_1, num_2, num_3, multiplicacao;
    printf ("Insira os numeros que deseja multiplicar: ");
    printf ("\nPrimeiro numero: ");
    scanf ("%f", &num_1);
    printf ("Segundo numero: ");
    scanf ("%f", &num_2);
    printf ("Terceiro numero: ");
    scanf ("%f", &num_3);
    multiplicacao = num_1*num_2*num_3;
    printf ("\nRESULTADO = %.2f\n", multiplicacao);
    printf("\nteste");
    return 0;
}
