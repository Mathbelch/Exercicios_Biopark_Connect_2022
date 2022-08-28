#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void zerar_vetor (int v[], int n);
void gerar_vetor_uniao (int vetor1[], int vetor2[], int vetor3[], int n);
void imprimir_vetor (int vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_31\n");
    int n = 5, vetor1[n],vetor2[n],vetor3[2*n];
    printf("\n1° VETOR:\n");
    ler_vetor (vetor1, n);
    printf("\n2° VETOR:\n");
    ler_vetor (vetor2, n);
    zerar_vetor (vetor3, n);
    gerar_vetor_uniao (vetor1, vetor2, vetor3, n);
    printf("\nVetor União: ");
    imprimir_vetor(vetor3,2*n);
    printf ("\n");
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

void gerar_vetor_uniao (int vetor1[], int vetor2[], int vetor3[], int n)
{
    int j = n;
    for (int i = 0; i < n; i++)
    {
       vetor3[i] = vetor1[i];
    }
    for (int i = 0; i < n; i++)
    {
        vetor3[j] = vetor2[i];
        j++;
    }
    for (int i = 0; i < 2*n; i++)
    {
        for (int j = i+1; j < 2*n; j++)
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
