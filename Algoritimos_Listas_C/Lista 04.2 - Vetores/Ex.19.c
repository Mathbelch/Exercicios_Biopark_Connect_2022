#include <stdio.h>
#include <stdlib.h>

void gerar_vetor (int vetor[], int n);
void imprimir_vetor (int vetor[], int n);

int main()
{
    printf("Exercicio_19\n");
    int n = 50;
    int vetor[n];
    gerar_vetor (vetor, n);
    imprimir_vetor (vetor, n);
    return 0;
}

void gerar_vetor (int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vetor [i] = ((i + (5 * i)) % (i + 1));
    }
}

void imprimir_vetor (int vetor[], int n)
{
    printf ("\nVetor: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d; ",vetor[i]);
    }
    printf ("\n");
}
