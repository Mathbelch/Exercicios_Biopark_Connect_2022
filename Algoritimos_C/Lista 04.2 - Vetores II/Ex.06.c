#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void buscar_maior_e_menor (int vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_06\n");
    int n = 10, vetor[n];
    ler_vetor (vetor,n);
    buscar_maior_e_menor (vetor,n);
    return 0;
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d° valor do vetor: ",i+1);
        scanf("%d",&vetor[i]);
    }
}

void buscar_maior_e_menor (int vetor[],int n)
{
    int maior = vetor[0];
    int menor = vetor[0];
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
    printf("\nMaior valor = %d.",maior);
    printf("\nMenor valor = %d.\n\n",menor);
}
