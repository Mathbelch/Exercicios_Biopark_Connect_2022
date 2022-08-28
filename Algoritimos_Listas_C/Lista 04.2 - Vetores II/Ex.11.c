#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
int qtd_numero_negativos (float vetor[],int n);
float soma_positivos (float vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_11\n");
    int n = 10;
    float vetor[n];
    ler_vetor (vetor,n);
    int qtd_negativos = qtd_numero_negativos (vetor, n);
    float soma_n_positivos = soma_positivos (vetor, n);
    printf ("\n No vetor tem-se %d números negativos e a soma de números positivos é %.2f!\n\n",qtd_negativos,soma_n_positivos);
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

int qtd_numero_negativos (float vetor[],int n)
{
    int qtd_negativos = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] < 0)
        {
           qtd_negativos++;
        }
    }
    return qtd_negativos;
}

float soma_positivos (float vetor[],int n)
{
    float soma_n_positivos = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > 0)
        {
            soma_n_positivos += vetor[i];
        }
    }
    return soma_n_positivos;
}
