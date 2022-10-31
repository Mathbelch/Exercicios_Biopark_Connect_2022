#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto
{
char nome[80];
double preco;
int quantidade;
};

void ler_produtos(int tamanho, struct Produto vet[]);
void ordenar_produtos_por_preco(int tamanho, struct Produto vet[]);
void ordenar_produtos_por_qtd(int tamanho, struct Produto vet[]);
void imprimir_produtos(int tamanho, struct Produto vet[]);

int main()
{
    int qtd, visualizacao;
    printf("Exercicio_01 - Usando Bubble Sort\n");
    printf("Informe quantos produtos deseja cadastrar: ");
    scanf("%d",&qtd);
    struct Produto cadastro[qtd];
    ler_produtos(qtd, cadastro);
    printf("Deseja visualizar sua lista de produtos por ordem crescente de (1)preco ou (2)quantidade? ");
    scanf("%d",&visualizacao);
    switch (visualizacao)
    {
    case 1:
        ordenar_produtos_por_preco(qtd, cadastro);
        printf("Produtos ordenados por ordem de preco:\n");
        imprimir_produtos(qtd, cadastro);
        break;
    case 2:
        ordenar_produtos_por_qtd(qtd, cadastro);
        printf("Produtos ordenados por ordem de quantidade em estoque:\n");
        imprimir_produtos(qtd, cadastro);
        break;
    default:
        return 1;
    }
    return 0;
}

void ler_produtos(int tamanho, struct Produto vet[])
{
    printf("\n********************************\n");
    for(int i = 0; i < tamanho; i++)
    {
    printf("Produto %d:\n",i+1);
    printf("Insira o nome do produto: ");
    fflush(stdin);
    gets(vet[i].nome);
    printf("Insira o preco do produto: R$ ");
    scanf("%lf",&vet[i].preco);
    printf("Insira a quantidade do produto: ");
    scanf("%d",&vet[i].quantidade);
    printf("\n********************************\n");
    }
}

void ordenar_produtos_por_preco(int tamanho, struct Produto vet[])
{
    struct Produto aux;
    for(int i = 0; i < tamanho - 1; i++)
    {
        for(int j = i; j < tamanho; j++)
        {
                if ((vet[i].preco > vet[j].preco) && ((j) < tamanho))
                {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
                }
        }
    }
}

void ordenar_produtos_por_qtd(int tamanho, struct Produto vet[])
{
    struct Produto aux;
    for(int i = 0; i < tamanho - 1; i++)
    {
        for(int j = i; j < tamanho; j++)
        {
                if ((vet[i].quantidade > vet[j].quantidade) && ((j) < tamanho))
                {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
                }
        }
    }
}

void imprimir_produtos(int tamanho, struct Produto vet[])
{
    printf("\n********************************\n");
    printf("Produto  preco  qtd\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %s  R$ %.2f  %d\n",vet[i].nome, vet[i].preco, vet[i].quantidade);
    }
}
