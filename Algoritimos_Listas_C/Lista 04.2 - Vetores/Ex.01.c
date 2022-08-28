#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_01\n");
    int A[6] = {1,0,5,-2,-5,7};
    int soma = A[0] + A[1] + A[5];
    printf ("\nSoma = %d\n",soma);
    A[4] = 100;
    for (int i = 0; i < 6; i++)
    {
        printf("[%d] - %d\n",i,A[i]);
    }

    return 0;
}
