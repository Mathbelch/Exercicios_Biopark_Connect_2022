#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
int montar_vetores (int vetor_impar[], int vetor_pares[], int vetor[], int n);
void imprimir_vetor (int vetor[],int n);

int qtd_pares = 0;
int qtd_impares = 0;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_29\n");
    int n = 6;
    int vetor[n];
    ler_vetor (vetor, n);
    int vetor_pares[qtd_pares], vetor_impar[qtd_impares];
    int soma_pares = montar_vetores (vetor_impar, vetor_pares, vetor, n);
    printf ("\n*****************************************\n");
    printf("\nValores: ");
    imprimir_vetor (vetor, n);
    printf("\nValores pares: ");
    imprimir_vetor (vetor_pares, qtd_pares);
    printf("\nSoma dos números pares = %d.",soma_pares);
    printf("\nValores ímpares: ");
    imprimir_vetor (vetor_impar, qtd_impares);
    printf("\nQuantidade de números ímpares = %d.",qtd_impares);
    return 0;
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira %d° valor: ",i+1);
        scanf("%d",&vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            qtd_pares++;
        }
        else
        {
            qtd_impares++;
        }
    }
}

int montar_vetores (int vetor_impar[], int vetor_pares[], int vetor[], int n)
{
    int iniciador_par = 0, iniciador_impar = 0, soma_pares = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetor_pares[iniciador_par] = vetor[i];
            soma_pares+=vetor_pares[iniciador_par];
            iniciador_par++;
        }
        else
        {
            vetor_impar[iniciador_impar] = vetor[i];
            iniciador_impar++;
        }
    }
    return soma_pares;
}

void imprimir_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vetor[i])
        {
            printf ("%d; ",vetor[i]);
        }
    }
}
