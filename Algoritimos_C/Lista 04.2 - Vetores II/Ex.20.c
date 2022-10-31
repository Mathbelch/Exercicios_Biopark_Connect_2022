#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[], int n);
int verificar_impares (int vetor[], int n);
void montar_vetor_impar (int vetor[], int n, int vetor_impar[], int qtd_impares);
void imprimir_vetor_2_por_linha (int vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_20\n");
    int n = 10;
    int vetor[n];
    ler_vetor(vetor,n);
    int qtd_impares = verificar_impares(vetor,n);
    int vetor_impar[qtd_impares];
    montar_vetor_impar(vetor, n, vetor_impar, qtd_impares);
    printf ("\nVetor: \n");
    imprimir_vetor_2_por_linha(vetor, n);
    printf ("\nVetor com impares: \n");
    imprimir_vetor_2_por_linha(vetor_impar, qtd_impares);
    printf("\n");
    return 0;
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int verificador = 0;
        do
        {
            printf("Insira %d° valor: ",i+1);
            scanf("%d",&vetor[i]);
            if ((vetor[i] >= 0)&&(vetor[i] <= 50))
            {
                verificador = 1;
            }
            else {
                printf ("\nInsira um valor dentro do intervalo [0;50].\n");
            }
        }
        while (verificador == 0);
    }
}

int verificar_impares (int vetor[], int n)
{
    int qtd = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            qtd++;
        }
    }
    return qtd;
}

void montar_vetor_impar (int vetor[], int n, int vetor_impar[], int qtd_impares)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            vetor_impar[k] = vetor[i];
            k++;
        }
    }
}

void imprimir_vetor_2_por_linha (int vetor[], int n)
{
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        printf ("%d; ",vetor[i]);
        contador++;
        if (contador%2 == 0)
        {
            printf("\n");
        }
    }
}
