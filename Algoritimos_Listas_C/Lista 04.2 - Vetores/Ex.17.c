#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
void substituir_negativos (float vetor[],int n);
void imprimir_vetor (float vetor[],int n);


int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_17\n");
    int n = 10;
    float vetor[n];
    ler_vetor (vetor,n);
    substituir_negativos (vetor,n);
    imprimir_vetor (vetor,n);
    return 0;
}

void ler_vetor (float vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira %d° valor: ",i+1);
        scanf("%f",&vetor[i]);
    }
}

void substituir_negativos (float vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }
}

void imprimir_vetor (float vetor[],int n)
{
    printf("\nVETOR: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%.2f; ",vetor[i]);
    }
}
