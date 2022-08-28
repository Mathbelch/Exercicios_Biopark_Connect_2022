#include <stdio.h>
#include <stdlib.h>

void ler_vetor (int vetor[], int n);

int main()
{
    printf("Exercicio_04\n");
    int n = 8, X, Y, soma;
    int vetor[n];
    ler_vetor (vetor,n);
    printf ("Insira a posicao X e a posição Y (0 a 7): ");
    scanf("%d %d",&X,&Y);
    soma = vetor[X] + vetor[Y];
    printf("\nSOMA = %d!\n",soma);
    return 0;
}

void ler_vetor (int vetor[], int n)
{
    printf ("Insira os elementos do vetor: \n");
    for (int i = 0; i < n ; i++)
    {
        printf("%d%c valor: ",i+1,167);
        scanf("%d",&vetor[i]);
    }
}
