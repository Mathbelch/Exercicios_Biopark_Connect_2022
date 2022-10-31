#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void imprimir_vetor (int vetor[],int n);
void buscar_maior_e_posicao (int vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_07\n");
    int n = 10, vetor[n];
    ler_vetor (vetor,n);
    imprimir_vetor (vetor,n);
    buscar_maior_e_posicao (vetor,n);
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

void imprimir_vetor (int vetor[],int n)
{
    printf("\nVETOR: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d; ",vetor[i]);
    }
}

void buscar_maior_e_posicao (int vetor[],int n)
{
    int maior = vetor[0];
    int posicao = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("\nMaior valor = %d.",maior);
    printf("\nPosicao no vetor = %d.",posicao);
    printf("\nElemento: %d.\n\n",posicao+1);
}
