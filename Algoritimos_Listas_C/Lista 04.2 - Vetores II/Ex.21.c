#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void montar_vetor_subtracao (int vetor1[], int vetor2[], int vetor3[], int tam);
void imprimir_vetor (int vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_21\n");
    int TAM = 10, Vetor_A[TAM], Vetor_B[TAM], Vetor_C[TAM];
    printf ("\nInsira o vetor A: \n");
    ler_vetor(Vetor_A, TAM);
    printf ("\nInsira o vetor B: \n");
    ler_vetor(Vetor_B, TAM);
    montar_vetor_subtracao (Vetor_A, Vetor_B, Vetor_C, TAM);
    printf ("\nVetor A: \n");
    imprimir_vetor(Vetor_A, TAM);
    printf ("\nVetor B: \n");
    imprimir_vetor(Vetor_B, TAM);
    printf ("\nVetor C (A - B): \n");
    imprimir_vetor(Vetor_C, TAM);

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

void montar_vetor_subtracao (int vetor1[], int vetor2[], int vetor3[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vetor3[i] = (vetor1[i] - vetor2[i]);
    }
}

void imprimir_vetor (int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%d; ",vetor[i]);
    }
    printf ("\n");
}
