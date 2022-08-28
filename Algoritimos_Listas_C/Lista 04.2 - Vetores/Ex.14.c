#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
void imprimir_vetor (float vetor[],int n);
void buscar_valores_iguais (float vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_14\n");
    int n = 10;
    float vetor[n];
    ler_vetor (vetor,n);
    imprimir_vetor (vetor,n);
    buscar_valores_iguais (vetor,n);
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

void imprimir_vetor (float vetor[],int n)
{
    printf("\nVETOR: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%.2f; ",vetor[i]);
    }
}

void buscar_valores_iguais (float vetor[],int n)
{
    printf ("\nValores repetidos: ");
    int qtd = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (vetor[i] == vetor [j])
            {
                qtd++;
            }
        }
    }
    int vetor_2 [qtd], k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (vetor[i] == vetor [j])
            {
                vetor_2[k]=vetor[i];
                k++;
            }
        }
    }
    for (int i = 0; i < qtd; i++)
    {
        int repetido = 0;
        for (int j = i + 1; j < qtd; j++)
        {
            if (vetor_2 [i] == vetor_2[j])
            {
                repetido = 1;
            }
        }
        if (repetido == 0){
            printf ("%d; ",vetor_2[i]);
        }
    }
}
