#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void teste (int unsigned n, int *a, int *b);

int main()
{
    int unsigned n;
    int b, k, *pb, *pk;
    pb = &b;
    pk = &k;
    printf("\nExercicio_07\n");
    printf("Insira um numero inteiro e positivo: ");
    scanf ("%d",&n);
    teste(n, pb, pk);
    printf("\nb^k = n ---> %d ^ %d = %d.\n\n",b, k, n);
    return 0;
}

void teste (int unsigned n, int *a, int *b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (pow(i,j) == n)
            {
                *a = i;
                *b = j;
                return;
            }
        }
    }
    return;
}
