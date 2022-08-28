#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
void ordenar_vetor_crescente (float vetor[], int n);
void ordenar_vetor_decrescente (float vetor[], int n);
void imprimir_vetor (float vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");  /// cuidar com a pontuação (p/decimal fica , )!
    printf("Exercicio_36\n");
    int n = 10;
    float vetor[n];
    ler_vetor(vetor,n);
    printf("\n**************************************************************************************************\n");
    printf("Vetor: ");
    imprimir_vetor(vetor, n);
    ordenar_vetor_crescente(vetor, n);
    printf("\n**************************************************************************************************\n");
    printf("Vetor ordenado em ordem crescente: ");
    imprimir_vetor(vetor, n);
    printf("\n**************************************************************************************************\n");
    ordenar_vetor_decrescente(vetor, n);
    printf("\n**************************************************************************************************\n");
    printf("Vetor ordenado em ordem decrescente: ");
    imprimir_vetor(vetor, n);
    printf("\n**************************************************************************************************\n");
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

void ordenar_vetor_crescente (float vetor[], int n)
{
    int indice_menor = 0;
    float aux = 0;
    for (int i = 0; i < n; i++)
    {
        indice_menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[indice_menor] > vetor[j])
            {
                indice_menor = j;
            }
        }

    aux = vetor[i];
    vetor[i] = vetor[indice_menor];
    vetor[indice_menor] = aux;
    }
}

void ordenar_vetor_decrescente (float vetor[], int n)
{
    int indice_menor = 0;
    float aux = 0;
    for (int i = 0; i < n; i++)
    {
        indice_menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[indice_menor] < vetor[j])
            {
                indice_menor = j;
            }
        }

    aux = vetor[i];
    vetor[i] = vetor[indice_menor];
    vetor[indice_menor] = aux;
    }
}

void imprimir_vetor (float vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.1f, ",vetor[i]);
    }
}
