#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void verificar_multiplos (int vetor[], int n, int X);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_18\n");
    int n = 10, X = 0;
    int vetor[n];
    ler_vetor (vetor,n);
    printf ("\nInsira o valor de X: ");
    scanf ("%d",&X);
    verificar_multiplos (vetor, n, X);
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

void verificar_multiplos (int vetor[], int n, int X)
{
    int qtd = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % X == 0)
        {
            qtd ++;
        }
    }
    int vetor_multiplos[qtd];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % X == 0)
        {
            vetor_multiplos[k] = vetor[i];
            k++;
        }
    }
    printf ("\nTotal de valores multiplos por %d no vetor = %d!",X,qtd);
    printf ("\nMultiplos: ");
    for (int i = 0; i < qtd ; i++)
    {
        printf ("%d; ",vetor_multiplos[i]);
    }
    printf("\n");
}
