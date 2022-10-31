#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor_notas (float vetor[],int n);
float media_turma (float vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_10\n");
    int n = 15;
    float vetor[n];
    ler_vetor_notas (vetor,n);
    float media_da_turma = media_turma(vetor,n);
    printf ("\nMedia da turma = %.2f!\n\n",media_da_turma);
    return 0;
}

void ler_vetor_notas (float vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira a nota do %d° aluno: ",i+1);
        scanf("%f",&vetor[i]);
    }
}

float media_turma (float vetor[],int n)
{
    float soma = 0, media = 0;
    for (int i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
    media = soma / n;
    return media;
}
