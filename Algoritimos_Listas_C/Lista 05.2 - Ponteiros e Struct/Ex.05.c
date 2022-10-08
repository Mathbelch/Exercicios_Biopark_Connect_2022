#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double media(double vet[],int n, int *p);

int main()
{
    printf("\nExercicio_09\n");
    int n = 8;
    double vet[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int posicao_valor_proximo;
    int *p;
    p = &posicao_valor_proximo;
    double valor_media = media(vet, n, p);
    printf("\nMedia dos valores = %.2f.\n O valor %.1f, na posicao %d eh o que se encontra mais proximo da media.\n\n", valor_media, vet[*p], *p);
    return 0;
}
double media(double vet[],int n, int *p)
{
    // Primeiro calcular a media:
    double soma = 0;
    double media_vetor = 0;
    for (int i = 0; i < n; i++)
    {
        soma += vet[i];
    }
    media_vetor = (soma / n);

    double min = media_vetor;
    for (int i = 0; i < n; i++)
    {
        if (abs(vet[i] - media_vetor) < min)
        {
            min = abs(vet[i] - media_vetor);
            *p = i;
        }
    }
    return media_vetor;
}
