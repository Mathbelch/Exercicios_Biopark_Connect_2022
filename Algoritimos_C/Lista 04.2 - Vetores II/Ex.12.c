#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
void imprimir_vetor (float vetor[],int n);
void buscar_maior_e_menor (float vetor[],int n);
float media_vetor (float vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_12\n");
    int n = 5;
    float vetor[n];
    ler_vetor (vetor,n);
    imprimir_vetor (vetor,n);
    buscar_maior_e_menor (vetor,n);
    printf ("\nMédia dos valores = %.2f.\n",media_vetor(vetor,n));

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

void buscar_maior_e_menor (float vetor[],int n)
{
    float maior = vetor[0];
    float menor = vetor[0];
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("\nMaior valor = %.1f.",maior);
    printf("\nMenor valor = %.1f",menor);
}

float media_vetor (float vetor[],int n)
{
    float soma = 0, media = 0;
    for (int i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
    media = soma / n;
    return media;
}

