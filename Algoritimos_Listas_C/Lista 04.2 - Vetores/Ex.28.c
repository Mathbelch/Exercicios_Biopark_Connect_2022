#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void zerar_vetor (int v[], int n);
void montar_vetores (int vetor_impar[], int vetor_par[], int vetor[],int n);
void imprimir_vetor (int vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_28\n");
    int n = 10;
    int vetor[n], v1[n],v2[n];
    ler_vetor (vetor, n);
    zerar_vetor (v1, n);
    zerar_vetor (v2, n);
    montar_vetores (v1, v2, vetor, n);
    printf("\nVETOR PRINCIPAL: ");
    imprimir_vetor (vetor, n);
    printf("\nV1: ");
    imprimir_vetor (v1, n);
    printf("\nV2: ");
    imprimir_vetor (v2, n);
    printf("\n\n ");
    return 0;
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira %d° valor: ",i+1);
        scanf("%d",&vetor[i]);
    }
}

void zerar_vetor (int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
    }
}

void montar_vetores (int vetor_impar[], int vetor_par[], int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetor_par[i] = vetor[i];
        }
        else
        {
            vetor_impar[i] = vetor[i];
        }
    }
}

void imprimir_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vetor[i])
        {
            printf ("%d; ",vetor[i]);
        }
    }
}
