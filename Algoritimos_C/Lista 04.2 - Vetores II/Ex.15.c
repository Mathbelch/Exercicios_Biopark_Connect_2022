#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void imprimir_vetor_sem_repetidos (int vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_15\n");
    int n = 20;
    int vetor[n];
    ler_vetor (vetor,n);
    imprimir_vetor_sem_repetidos(vetor,n);
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

void imprimir_vetor_sem_repetidos (int vetor[],int n)
{
    printf("\nVETOR: ");
    for (int i = 0; i < n; i++)
    {
        int repetido = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[i] == vetor[j])
            {
                repetido = 1;
            }
        }
        if (repetido == 0){
            printf ("%d; ",vetor[i]);
        }
    }
}
