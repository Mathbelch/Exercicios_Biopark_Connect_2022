#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (int vetor[],int n);
void imprimir_vetor (int vetor[],int n);
void soma_vetores (int vetorX[], int vetorY[], int vetor_soma[], int n);
void produto_vetores (int vetorX[], int vetorY[], int vetor_produto[], int n);
int diferenca_vetores (int vetorX[], int vetorY[], int vetor_diferenca[], int n);
int interseccao_vetores (int vetorX[], int vetorY[], int vetor_interseccao[], int n);
int unir_vetores (int vetorX[], int vetorY[], int vetor_uniao[], int n);
void zerar_vetor (int v[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_32\n");
    int n = 5, vetorX[n], vetorY[n], vetor_soma[n], vetor_produto[n], vetor_diferenca[n], vetor_interseccao[n], vetor_uniao[2*n],
        tamanho_vetor_diferenca, tamanho_vetor_interseccao, tamanho_vetor_uniao, opcao;

    printf("\nVETOR X:\n");
    ler_vetor(vetorX, n);
    printf("\nVETOR Y:\n");
    ler_vetor(vetorY, n);
    printf("\n**************************\n");
    do
    {
        printf("Escolha uma opção: ");
        printf("\n(1) - Obter vetor soma;\n(2) - Obter vetor produto;\n(3) - Obter vetor diferença;\n(4) - Obter vetor intersecção;\n(5) - Obter vetor união;\n(6) - Encerrar programa;\n\n");
        scanf("%d",&opcao);
        switch (opcao)
        {
            case 1:
                soma_vetores (vetorX, vetorY, vetor_soma, n);
                printf("\n**************************\n");
                printf("VETOR X: ");
                imprimir_vetor(vetorX,n);
                printf("\nVETOR Y: ");
                imprimir_vetor(vetorY,n);
                printf ("\nVetor Soma = ");
                imprimir_vetor(vetor_soma, n);
                printf("\n**************************\n");
                break;
            case 2:
                produto_vetores(vetorX, vetorY, vetor_produto, n);
                printf("\n**************************\n");
                printf("VETOR X: ");
                imprimir_vetor(vetorX,n);
                printf("\nVETOR Y: ");
                imprimir_vetor(vetorY,n);
                printf ("\nVetor Produto = ");
                imprimir_vetor(vetor_produto, n);
                printf("\n**************************\n");
                break;
            case 3:
                tamanho_vetor_diferenca = diferenca_vetores(vetorX, vetorY, vetor_diferenca, n);
                printf("\n**************************\n");
                printf("VETOR X: ");
                imprimir_vetor(vetorX, n);
                printf("\nVETOR Y: ");
                imprimir_vetor(vetorY, n);
                printf ("\nVetor Diferença = ");
                imprimir_vetor(vetor_diferenca, tamanho_vetor_diferenca);
                printf("\n**************************\n");
                break;
            case 4:
                tamanho_vetor_interseccao = interseccao_vetores(vetorX, vetorY, vetor_interseccao, n);
                printf("\n**************************\n");
                printf("VETOR X: ");
                imprimir_vetor(vetorX,n);
                printf("\nVETOR Y: ");
                imprimir_vetor(vetorY,n);
                printf ("\nVetor Intersecção = ");
                imprimir_vetor(vetor_interseccao, tamanho_vetor_interseccao);
                printf("\n**************************\n");
                break;
            case 5:
                tamanho_vetor_uniao = unir_vetores(vetorX, vetorY, vetor_uniao, n);
                printf("\n**************************\n");
                printf("VETOR X: ");
                imprimir_vetor(vetorX,n);
                printf("\nVETOR Y: ");
                imprimir_vetor(vetorY,n);
                printf ("\nVetor União = ");
                imprimir_vetor(vetor_uniao, tamanho_vetor_uniao);
                printf("\n**************************\n");
                break;
            case 6:
                printf("\n**************************\n");
                printf("\nObrigado por usar nosso programa!!!\n");
                printf("\n**************************\n");
                break;
            default:
                printf("\nOpção Inválida!\n");
        }
    }
    while (opcao != 6);

    return 0;
}

void imprimir_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%d; ",vetor[i]);
    }
}

void ler_vetor (int vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d° valor: ",i+1);
        scanf("%d",&vetor[i]);
    }
}

void soma_vetores (int vetorX[], int vetorY[], int vetor_soma[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vetor_soma[i] = vetorX[i] + vetorY[i];
    }
}

void produto_vetores (int vetorX[], int vetorY[], int vetor_produto[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vetor_produto[i] = vetorX[i] * vetorY[i];
    }
}

int diferenca_vetores (int vetorX[], int vetorY[], int vetor_diferenca[], int n)
{
   zerar_vetor(vetor_diferenca, n);
   int k = 0;
   for (int i = 0; i < n; i++)
   {
       int verificador = 1;
       for (int j = 0; j < n; j++)
       {
           if (vetorX[i] == vetorY[j])
           {
               verificador = 0;
           }
       }
       if (verificador)
       {
           vetor_diferenca[k] = vetorX[i];
           k++;
       }
   }
   return k;
}

int interseccao_vetores (int vetorX[], int vetorY[], int vetor_interseccao[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int verificador = 0;
        for (int j = 0; j < n; j++)
        {
            if (vetorX[i] == vetorY[j])
            {
                verificador = 1;
            }
        }
        if (verificador == 1)
        {
            vetor_interseccao[k] = vetorX[i];
            k++;
        }
    }
    return k;
}

int unir_vetores (int vetorX[], int vetorY[], int vetor_uniao[], int n)
{
    zerar_vetor(vetor_uniao, 2*n);
    for (int i = 0; i < n; i++)
    {
        vetor_uniao[i] = vetorX[i];
    }
    int k = n;
    for (int i = 0; i < n; i++)
    {
        int verificador = 1;
        for (int j = 0; j < n; j++)
            {
            if (vetorY[i] == vetorX[j])
            {
                verificador = 0;
            }
        }
        if (verificador == 1){
            vetor_uniao[k] = vetorY[i];
            k++;
        }
    }
    return k;
}

void zerar_vetor (int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
    }
}
