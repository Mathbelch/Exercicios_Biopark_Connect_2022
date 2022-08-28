#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void ordenar_vetor (int vetor[], int n);
void imprimir_vetor (int vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");  /// cuidar com a pontuação (p/decimal fica , )!
    printf("Exercicio_37\n");
    int n = 11;
    int vetor[n];
    ler_vetor(vetor,n);
    ordenar_vetor(vetor, n);
    printf("Vetor: ");
    imprimir_vetor(vetor, n);
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

void ordenar_vetor (int vetor[], int n)
{
    int indice_menor = 0, indice_maior = 0;
    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        indice_maior = i;
        indice_menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[indice_menor] > vetor[j])
            {
                indice_menor = j;
            }
            if (vetor[indice_maior] < vetor[j])
            {
                indice_maior = j;
            }
        }

        if (i < 5)
        {
            aux = vetor[i];
            vetor[i] = vetor[indice_menor];
            vetor[indice_menor] = aux;
        }
        else if (i >= 5)
        {
            aux = vetor[i];
            vetor[i] = vetor[indice_maior];
            vetor[indice_maior] = aux;
        }
    }
}

void imprimir_vetor (int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",vetor[i]);
    }
}
