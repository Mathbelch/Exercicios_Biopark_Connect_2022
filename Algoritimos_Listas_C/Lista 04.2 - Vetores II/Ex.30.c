#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void zerar_vetor (int v[], int n);
void gerar_vetor_interseccao (int vetor1[], int vetor2[], int vetor3[], int n);
void imprimir_vetor (int vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_30\n");
    int n = 10, vetor1[n],vetor2[n],vetor3[n];
    printf("\n1° VETOR:\n");
    ler_vetor (vetor1, n);
    printf("\n2° VETOR:\n");
    ler_vetor (vetor2, n);
    zerar_vetor (vetor3, n);
    gerar_vetor_interseccao (vetor1, vetor2, vetor3, n);
    printf("\nVetor Intersecção: ");
    imprimir_vetor(vetor3,n);
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

void gerar_vetor_interseccao (int vetor1[], int vetor2[], int vetor3[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                vetor3[k] = vetor1[i];
                k++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (vetor3[i] == vetor3[j])
            {
                vetor3[j] = 0;
            }
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
