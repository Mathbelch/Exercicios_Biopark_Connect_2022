#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Datas
{
    int dia;
    int mes;
    int ano;
};

void ler_datas(int tamanho, struct Datas vet[]);
void ordenar_datas(int tamanho, struct Datas vet[]);
void imprimir_datas(int tamanho, struct Datas vet[]);

int main()
{
    printf("Exercicio_02 - Usando Bubble Sort\n");
    int tam = 5;
    printf("Indique a qtd de datas para serem lidas:");
    scanf("%d", &tam);
    struct Datas consulta[tam];
    ler_datas(tam, consulta);
    ordenar_datas(tam,consulta);
    imprimir_datas(tam, consulta);
    return 0;
}

void ler_datas(int tamanho, struct Datas vet[])
{
    printf("\n********************************\n");
    for(int i = 0; i < tamanho; i++)
    {
        printf("Insira a %d data (dd/mm/aaaa): ",i+1);
        scanf("%d/%d/%d",&vet[i].dia,&vet[i].mes,&vet[i].ano);
        printf("\n********************************\n");
    }
}
void ordenar_datas(int tamanho, struct Datas vet[])
{
    struct Datas aux;

    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (vet[i].ano > vet[j].ano)
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;

            }
            else if (vet[i].mes > vet[j].mes && vet[i].ano == vet[j].ano)
            {

                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;

            }
            else  if (vet[i].dia > vet[j].dia && vet[i].mes == vet[j].mes && vet[i].ano == vet[j].ano)
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;

            }
        }

    }
}

void imprimir_datas(int tamanho, struct Datas vet[])
{
    printf("\n********************************\n");
    printf("Datas por ordem cronologica:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d: %d/%d/%d\n", i + 1, vet[i].dia, vet[i].mes, vet[i].ano);
    }
}


