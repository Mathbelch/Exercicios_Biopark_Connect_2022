#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void ler_vetor (float vetor[],int n);
float calculo_media_vetor (float vetor[], int n);
float desvio_padrao_vetor (float vetor[], int n, float media);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_26\n");
    int n = 10;
    float vetor[n];
    ler_vetor (vetor,n);
    float media = calculo_media_vetor (vetor, n);
    float desvio_padrao = desvio_padrao_vetor (vetor, n, media);
    printf ("\nDesvio Padrão = %.3f.\n",desvio_padrao);
    return 0;
}

void ler_vetor (float vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira %d° valor: ",i+1);
        scanf("%f",&vetor[i]);
    }
}

float calculo_media_vetor (float vetor[], int n)
{
    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma+= vetor[i];
    }
    float media = soma/n;
    return media;
}

float desvio_padrao_vetor (float vetor[], int n, float media)
{
    float somatorio = 0;
    for (int i = 0; i < n; i++)
    {
        somatorio+= pow((vetor[i] - media),2);
    }
    float DP = ((1 / (float)(n - 1) ) * somatorio);
    DP = sqrt(DP);
    return DP;
}
