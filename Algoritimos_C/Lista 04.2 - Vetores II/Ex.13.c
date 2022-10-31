#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
void imprimir_vetor (float vetor[],int n);
void buscar_maior_e_menor_e_posicoes (float vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_13\n");
    int n = 5;
    float vetor[n];
    ler_vetor (vetor,n);
    imprimir_vetor (vetor,n);
    buscar_maior_e_menor_e_posicoes (vetor,n);
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

void buscar_maior_e_menor_e_posicoes (float vetor[],int n)
{
    float maior = vetor[0];
    float menor = vetor[0];
    int posicao_menor = 0;
    int posicao_maior = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao_maior = i;
        }
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicao_menor = i;
        }
    }
    printf("\nMaior valor = %.1f, na posição %d.",maior,posicao_maior);
    printf("\nMenor valor = %.1f, na posição %d.",menor,posicao_menor);
}

