#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ler_vetor (int vetor[]);
void criar_vetor_B (int vetor_B[],int vetor_A[]);
void imprimir_vetores (int vetor[],char nome_vetor);

int main()
{
    printf("Exercicio_03\n");
    int vetor_A[10], vetor_B[10];
    ler_vetor (vetor_A);
    criar_vetor_B (vetor_B,vetor_A);
    imprimir_vetores(vetor_A,'A');
    imprimir_vetores(vetor_B,'B');
    return 0;
}

void ler_vetor (int vetor[])
{
    printf ("Insira os elementos do vetor A: \n");
    for (int i = 0; i < 10 ; i++)
    {
        printf("%d%c valor: ",i+1,167);
        scanf("%d",&vetor[i]);
    }
}

void criar_vetor_B (int vetor_B[],int vetor_A[])
{
    for (int i = 0; i < 10; i++)
    {
        vetor_B[i] = pow(vetor_A[i],2);
    }
}

void imprimir_vetores (int vetor[],char nome_vetor)
{
    printf("\nVetor %c : ",nome_vetor);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
}
