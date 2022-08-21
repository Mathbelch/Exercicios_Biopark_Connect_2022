#include <stdio.h>
#include <stdlib.h>

void calcule_tabuada(int n,int m);

int main()
{
    printf("Exercicio_01_B\n");
    int n, m;
    printf("Insira o valor de n (0 a 9): ");
    scanf("%i", &n);
    if ((n < 2)||(n > 9))
    {
        printf("ERRO! - Insira um valor entre 2 e 9!\n");
        return 0;
    }
    else
    {
        printf("Insira o valor de m: ");
        scanf("%i",&m);
        calcule_tabuada(n, m);
        return 0;
    }
}

void calcule_tabuada(int n,int m)
{
    for (int i = 1; i <= m; i++)
    {
        printf ("%d X %d = %d;\n",n,i,n*i);
    }
}
