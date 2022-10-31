#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_1\n\n");
    float A, B, maior;
    printf ("Insira o primeiro valor (A): ");
    scanf ("%f", &A);
    printf ("Insira o segundo valor (B): ");
    scanf ("%f", &B);

    if (A>B){
            printf ("\n %.3f eh o maior valor!\n", A);
    }   else if (B>A){
            printf ("\n %.3f eh o maior valor!\n", B);
    }   else if (B==A){
            printf ("\n\nOs dois valores sao iguais!\n\n");
    }
    return 0;
}
