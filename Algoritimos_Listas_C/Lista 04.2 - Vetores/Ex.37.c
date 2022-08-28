#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void zerar_vetor (int vetor[], int n);
void ler_vetor (int vetor[],int n);
void ordenar_vetor_crescente (int vetor[], int n);
void imprimir_vetor (int vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_38\n");
    int n = 10, vetor[n];
    zerar_vetor(vetor, n);
    ler_vetor(vetor, n);
    printf("Vetor: ");
    imprimir_vetor(vetor, n);
    return 0;
}

void zerar_vetor (int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vetor[i] = 0;
    }
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d° valor: ", i+1);
        scanf("%d",&vetor[i]);
        ordenar_vetor_crescente(vetor,i);
    }
}

void ordenar_vetor_crescente (int vetor[], int n)
{
    int indice_menor = 0;
    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        indice_menor = i;
        for (int j = i + 1; j <= n; j++)
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

void imprimir_vetor (int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
}
