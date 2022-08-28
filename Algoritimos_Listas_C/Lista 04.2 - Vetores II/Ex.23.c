#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
float buscar_produto_escalar(float vetor1[], float vetor2[], int tam);
void imprimir_vetor (float vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_23\n");
    int TAM = 5;
    float Vetor_A[TAM], Vetor_B[TAM];
    printf ("\nInsira o vetor A: \n");
    ler_vetor(Vetor_A, TAM);
    printf ("\nInsira o vetor B: \n");
    ler_vetor(Vetor_B, TAM);
    float prod_escalar = buscar_produto_escalar(Vetor_A, Vetor_B, TAM);
    printf ("\nVetor A: \n");
    imprimir_vetor(Vetor_A, TAM);
    printf ("\nVetor B: \n");
    imprimir_vetor(Vetor_B, TAM);
    printf("\nProduto Escalar entre A e B = %.2f!\n",prod_escalar);
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

float buscar_produto_escalar(float vetor1[], float vetor2[], int tam)
{
   float soma = 0;
   for (int i = 0; i < tam; i++)
   {
       soma += (vetor1[i]*vetor2[i]);
   }
   return soma;
}

void imprimir_vetor (float vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%.2f; ",vetor[i]);
    }
    printf ("\n");
}
