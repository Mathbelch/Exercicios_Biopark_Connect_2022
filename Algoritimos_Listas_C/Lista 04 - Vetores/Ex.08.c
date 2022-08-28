#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_08\n\n");

    int Vetor_R[5],Vetor_A[10],pontos=0;
    printf ("Insira o gabarito da LOTO: \n");

    for (int i=0;i<5;i++){
        printf ("%d°número: ",i+1);
        scanf ("%d",&Vetor_R[i]);
    }
    printf ("\nInsira os valores da aposta: \n");
    for (int j=0;j<10;j++){
        printf ("%d°número: ",j+1);
        scanf ("%d",&Vetor_A[j]);
    }
    for (int j=0;j<10;j++){
        for (int i=0;i<5;i++){
            if (Vetor_A[j]==Vetor_R[i]){
                pontos++;
            }
        }
    }
    printf ("\nO jogador fez %d pontos!\n",pontos);

    return 0;
}
