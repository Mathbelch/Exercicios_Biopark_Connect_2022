#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void zerar_vetor (int v[], int n);
void ler_vetor_sem_repeticao (int vetor[],int n);
void imprimir_vetor (int vetor[],int n);


int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_34\n");
    int n = 10;
    int vetor[n];
    zerar_vetor(vetor, n);
    ler_vetor_sem_repeticao (vetor,n);
    imprimir_vetor (vetor,n);
    return 0;
}

void zerar_vetor (int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
    }
}

void ler_vetor_sem_repeticao (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int verificador;
        do
        {
            verificador = 0;
            printf("Insira %d° valor: ",i+1);
            scanf("%d",&vetor[i]);
            for (int j = 0; j < i; j++)
            {
                if (vetor[i] == vetor[j])
                {
                    verificador = 1;
                }
            }
        }
        while (verificador);
    }
}

void imprimir_vetor (int vetor[],int n)
{
    printf("\nVETOR: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d; ",vetor[i]);
    }
}
