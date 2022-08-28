#include <stdio.h>
#include <stdlib.h>

void preencher_vetor (int tam, int vetor[]);
void imprimir_vetor (int tam, int vetor[]);

int main()
{
    printf("Exercicio_25\n");
    int tam = 100, vetor[tam];
    preencher_vetor (tam, vetor);
    imprimir_vetor (tam, vetor);
    return 0;
}

void preencher_vetor (int tam, int vetor[])
{
    int iniciador = 0;
    for (int i = 0; i < tam; i++)
    {
        int verificador = 0;
        do
        {
           if ((iniciador % 7 == 0)||(((iniciador + 3) % 10) == 0))
           {
               vetor[i] = iniciador;
               iniciador++;
               verificador = 1;
           }
           else
           {
               iniciador ++;
           }
        }
        while (verificador == 0);
    }
}

void imprimir_vetor (int tam, int vetor[])
{
    printf ("\nVetor: ");
    for (int i = 0; i < tam; i++)
    {
        printf ("%d; ",vetor[i]);
    }
    printf ("\n");
}
