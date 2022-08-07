#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_01_e_04\n\n");

    int Vet1[10],Vet2[10],Vet3[10],controle=1;

    for (int i=0;i<10;i++){
        printf ("Insira o %d%c elemento do 1%c vetor: ",controle,167,167);
        scanf ("%d",&Vet1[i]);
        printf ("Insira o %d%c elemento do 2%c vetor: ",controle,167,167);
        scanf ("%d",&Vet2[i]);
        Vet3[i]=Vet1[i]+Vet2[i];
        controle++;
    }

    system ("cls");
    printf("Vetor 1: ");
    for (int i=0;i<10;i++){
        printf ("%d ",Vet1[i]);
    }
    printf("\nVetor 2: ");
    for (int i=0;i<10;i++){
        printf ("%d ",Vet2[i]);
    }
    printf ("\nVetor 3: ");
    for (int i=0;i<10;i++){
        printf ("%d ",Vet3[i]);
    }

    return 0;
}
