#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_vetor (float vetor[],int n);
void instrucoes (void);
void principal (float vetor[],int n);
void imprimir_vetor (float vetor[],int n);
void mostrar_vetor_inverso (float vetor[],int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_16\n");
    int n = 5;
    float vetor[n];
    ler_vetor (vetor,n);
    instrucoes();
    principal (vetor,n);
    return 0;
}

void ler_vetor (float vetor[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira %d° valor: ",i+1);
        scanf("%f",&vetor[i]);
    }
}

void instrucoes (void)
{
    printf("\n**************************************\n");
    printf("Digite o código da opção desejada: ");
    printf("\n**************************************\n");
    printf("(1) Visualizar vetor;");
    printf("\n(2) Visualizar vetor na ordem inversa;");
    printf("\n(0) Encerrar programa;");
    printf("\n**************************************\n");
}

void principal (float vetor[],int n)
{
    int codigo = 0;
    do
    {
        printf ("Escolha uma das opções: ");
        scanf ("%d",&codigo);
        switch (codigo)
        {
        case 1:
            imprimir_vetor (vetor,n);
            printf("\n**************************************\n");
            break;
        case 2:
            mostrar_vetor_inverso (vetor,n);
            printf("\n**************************************\n");
            break;
        case 0:
            printf("\n**************************************\n");
            printf("\nObrigado por usar nosso programa xD\n");
            printf("\n**************************************\n");
            break;
        default:
            printf("\nOpção Inválida!\n");
            printf("\n**************************************\n");
        }
    }
    while (codigo !=0);
}

void imprimir_vetor (float vetor[],int n)
{
    printf("\nVETOR: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%.2f; ",vetor[i]);
    }
}

void mostrar_vetor_inverso (float vetor[],int n)
{
    printf ("\nVetor Inverso: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf ("%.2f; ",vetor[i]);
    }
}
