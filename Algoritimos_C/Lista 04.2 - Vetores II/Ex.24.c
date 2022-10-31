#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_conjunto (float vetor_altura[], float vetor_RA[], float vetor_maior_RA_ALT[], float vetor_menor_RA_ALT[], int tam);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_24\n");
    int tam = 20;
    float vetor_altura[tam], vetor_RA[tam], vetor_maior_RA_ALT[2],vetor_menor_RA_ALT[2];
    ler_conjunto(vetor_altura,vetor_RA,vetor_maior_RA_ALT,vetor_menor_RA_ALT,tam);
    return 0;
}

void ler_conjunto (float vetor_altura[], float vetor_RA[], float vetor_maior_RA_ALT[], float vetor_menor_RA_ALT[], int tam)
{
    printf("Insira o 1° conjunto de dados (RA - altura(m)): ");
    scanf ("%f - %f",&vetor_RA[0],&vetor_altura[0]);
    vetor_maior_RA_ALT[0] = vetor_RA[0];
    vetor_menor_RA_ALT[0] = vetor_RA[0];
    vetor_maior_RA_ALT[1] = vetor_altura[0];
    vetor_menor_RA_ALT[1] = vetor_altura[0];
    for (int i = 1; i < tam/2 ; i++)
    {
        printf("Insira o %d° conjunto de dados (RA - altura(m)): ",i+1);
        scanf ("%f - %f",&vetor_RA[i],&vetor_altura[i]);
        if (vetor_altura[i] > vetor_maior_RA_ALT[1])
        {
            vetor_maior_RA_ALT[1] = vetor_altura[i];
            vetor_maior_RA_ALT[0] = vetor_RA[i];
        }
        else if (vetor_altura[i] < vetor_menor_RA_ALT[1])
             {
            vetor_menor_RA_ALT[1] = vetor_altura[i];
            vetor_menor_RA_ALT[0] = vetor_RA[i];
        }
    }
    printf ("\n**************************\n");
    printf ("Aluno mais baixo, com %.2f metros de altura: %.0f ",vetor_menor_RA_ALT[1],vetor_menor_RA_ALT[0]);
    printf ("\nAluno mais alto, com %.2f metros de altura: %.0f \n\n",vetor_maior_RA_ALT[1],vetor_maior_RA_ALT[0]);
}
