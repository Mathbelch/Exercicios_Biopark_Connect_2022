#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void buscar_primos (int vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_27\n");
    int n = 10;
    int vetor[n];
    ler_vetor (vetor,n);
    buscar_primos (vetor, n);

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

void buscar_primos (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int primo = 1;
        for (int j = vetor[i] - 1; j > 1; j--)
        {
            if (vetor[i] % j == 0)
            {
                primo = 0;
            }
        }
        if (primo == 1)
        {
            printf("\n");
            printf("-> %d, %d° posição no vetor;\n",vetor[i],i);
        }
    }
}
