#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_09\n\n");

    int Tam_D=10,Vetor_D[Tam_D],Tam_F=0;

    for (int i=0; i<Tam_D; i++)
    {
        printf ("Insira o %d%c valor do vetor D: ",i+1,167);
        scanf ("%d",&Vetor_D[i]);
        if (Vetor_D[i]>0)
        {
            Tam_F++;
        }
    }

    printf ("\nVetor D: ");
    for (int j=0; j<Tam_D; j++)
    {
        printf ("%d ", Vetor_D[j]);
    }

    if (Tam_F>0)
    {
        int Vetor_F[Tam_F],cont_F=0;

        for (int i=0; i<Tam_D; i++)
        {
            if (Vetor_D[i]>0)
            {
                Vetor_F[cont_F]=Vetor_D[i];
                cont_F++;
            }
        }

        printf ("\nVetor F: ");
        for (int j=0; j<Tam_F; j++)
        {
            printf ("%d ", Vetor_F[j]);
        }
        printf ("\n\n");
    }
    else
    {
        printf ("\nVetor F nao existente - Insira valores maiores do que zero para gerar o vetor F!\n\n");
    }


    return 0;
}
