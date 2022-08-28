#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
int achar_pares (int vetor[],int n);

int main()
{
    setlocale (LC_ALL,"Portuguese");
    printf("Exercicio_05\n");
    int n = 10;
    int vetor[n];
    ler_vetor (vetor,n);
    int qtd_pares = achar_pares (vetor,n);
    printf ("\nTotal de valores pares: %d\n",qtd_pares);
    return 0;
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d° valor do vetor: ",i+1);
        scanf("%d",&vetor[i]);
    }
}

int achar_pares (int vetor[],int n)
{
    int qtd_pares = 0;
    printf ("\nValores pares: ");
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf ("%d; ",vetor[i]);
            qtd_pares++;
        }
    }
    return qtd_pares;
}
