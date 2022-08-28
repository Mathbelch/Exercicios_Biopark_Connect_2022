#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ler_valor (char nome, int controle);
void montar_vetor (int numero, int vetor[]);
void imprimir_vetor (int vetor[],int n, char nome);
void somar_vetores (int vetor_1[], int vetor_2[], int vetor_3[], int n);
void zerar_vetor (int vetor[], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_35\n");
    int n = 5, A, B, vetor_A[n],vetor_B[n], vetor_C[n];
    A = ler_valor ('A',1);
    B = ler_valor ('B',2);
    montar_vetor(A, vetor_A);
    montar_vetor(B, vetor_B);
    imprimir_vetor(vetor_A, n, 'A');
    imprimir_vetor(vetor_B, n, 'B');
    printf ("\n");
    zerar_vetor(vetor_C, n);
    somar_vetores(vetor_A, vetor_B, vetor_C, n);
    imprimir_vetor(vetor_C, n, 'C');
    printf ("\n");
    return 0;
}

int ler_valor (char nome, int controle)
{
    int Valor = 0;
    do
    {
        printf("Insira o %d° valor (%c): ",controle, nome);
        scanf("%d",&Valor);
        if (Valor < 0 || Valor > 10000)
        {
            printf ("\nInsira um valor inteiro entre 0 e 10 000.\n");
        }
    }
    while (Valor < 0 || Valor > 10000);
    return Valor;
}

void montar_vetor (int numero, int vetor[])
{
    int k = 0;
    for (int i = 10000; i >= 1; i = i/10)
    {
        if (numero < i)
        {
            vetor[k] = 0;
            k++;
        }
        else if (numero >= i)
        {
            vetor[k] = numero/i;
            numero -= vetor[k] * i;
            k++;
        }
    }
}

void imprimir_vetor (int vetor[],int n, char nome)
{
    printf("\nVETOR %C: ",nome);
    for (int i = 0; i < n; i++)
    {
        printf ("%d",vetor[i]);
    }
}

void somar_vetores (int vetor_1[], int vetor_2[], int vetor_3[], int n)
{
    int soma;
    for (int i = n - 1; i >= 0; i--)
    {
        soma = vetor_1[i] + vetor_2[i] + vetor_3[i];
        if (soma >= 10)
        {
            vetor_3[i - 1] += 1;
            soma -= 10;
            vetor_3[i] = soma;
        }
        else
        {
            vetor_3[i] = soma;
        }
    }

}

void zerar_vetor (int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vetor[i] = 0;
    }
}
