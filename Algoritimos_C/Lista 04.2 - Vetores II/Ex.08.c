#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void mostrar_vetor_inverso (int vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_08\n");
    int n = 6, vetor[n];
    ler_vetor(vetor,n);
    mostrar_vetor_inverso (vetor,n);
    return 0;
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d° número: ",i+1);
        scanf("%d",&vetor[i]);
    }
}

void mostrar_vetor_inverso (int vetor[],int n)
{
    printf ("\nVetor Inverso: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf ("%d; ",vetor[i]);
    }
    printf ("\n\n");
}
