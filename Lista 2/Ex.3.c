#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_3\n\n");
    int A, B, resultado;
    printf ("\nInsira o primeiro valor inteiro (A): ");
    scanf ("%d", &A);
    printf ("\nInsira o segundo valor inteiro (B): ");
    scanf ("%d", &B);

    if (A==B) {
        resultado = A + B;
    } else {
        resultado = A * B;
    }

    printf ("\nO resultado eh %d!\n", resultado);
    return 0;
}
