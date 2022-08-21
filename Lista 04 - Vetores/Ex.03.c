#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");
    printf("Exercicio_03\n\n");
    int Tam = 8,vetor_A[Tam],vetor_B[Tam];
    for(int i=0;i<Tam;i++){
        printf ("Insira o %d° elemento do vetor A: ",i+1);
        scanf ("%d",&vetor_A[i]);
        vetor_B[i]=2*vetor_A[i];
    }
    printf ("\nVetor A: [ ");
    for (int i=0;i<Tam;i++){
        printf ("%d ",vetor_A[i]);
    }
    printf ("]");
    printf ("\nVetor B: [ ");
    for (int i=0;i<Tam;i++){
        printf ("%d ",vetor_B[i]);
    }
    printf ("]");
    return 0;
}
