#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_02\n");
    int A[6];
    printf("Insira os valores inteiros do vetor A: ");
    for (int i = 0; i < 6; i++)
    {
        printf("\n %d%c valor: ",i+1,167);
        scanf("%d",&A[i]);
    }
    printf ("\nVetor A: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
