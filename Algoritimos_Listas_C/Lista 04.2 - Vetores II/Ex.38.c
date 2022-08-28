#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void montar_triangulo_pascal(int n,int vet[]);
void zerar_vetor(int vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_39\n");
    int n, vet[n];
    zerar_vetor(vet, n);
    printf("Insira o tamanho (número de linhas) do triângulo de Pascal: ");
    scanf("%d",&n);
    montar_triangulo_pascal (n, vet);
    return 0;
}

void montar_triangulo_pascal(int n, int vet[])
{
    int vet_aux[n];
    zerar_vetor(vet_aux,n);
    zerar_vetor(vet,n);
    vet_aux[1] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            vet[j] = vet_aux[j-1] + vet_aux[j];
        }
        for (int s = 1; s < n; s++)
        {
            vet_aux[s] = vet[s];
        }
        for (int k = 1; k < i + 1; k++)
        {
            printf("%d ", vet[k]);
        }
        printf("\n");
    }
}

void zerar_vetor(int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vetor[i] = 0;
    }
}
