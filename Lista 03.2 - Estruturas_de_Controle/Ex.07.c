#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("Exercicio_01_G\n");
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Insira o tamanho (n) do X: ");
    scanf("%d",&n);
    if ((n <= 0)||(n % 2 == 0))
    {
        printf ("\n Valor inválido!\n--> Insira um valor positivo e ímpar.\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++){
            if ((i == j) || (i + j == n - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
