#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    printf("Exercicio_07\n\n");
    setlocale (LC_ALL,"Portuguese");

    int Tam_R=5,Tam_S=10,Tam_X=5,contX=0,Verif=0;
    int vetor_R[Tam_R],vetor_S[Tam_S],vetor_X[Tam_X];

    for (int j=0;j<5;j++){
        printf("Insira o %d° número do vetor R: ",j+1);
        scanf("%d",&vetor_R[j]);
    }

    printf ("\n***********************************\n");

    for (int i=0;i<10;i++){
        printf("Insira o %d° número do vetor S: ",i+1);
        scanf("%d",&vetor_S[i]);
    }

    for (int i=0;i<10;i++){
        for (int j=0;j<5;j++){
            if (vetor_S[i]==vetor_R[j]){
                vetor_X[contX]=vetor_R[j];
                contX++;
                Verif=1;
            }
        }
    }

    printf ("\n***********************************\n");

    if (Verif==1){
        printf ("Vetor X: ");
        for (int i=0;i<contX;i++){
            printf("%d ",vetor_X[i]);
        }
        printf("\n");
    }else{
        printf ("Vetor X vazio - não há valor comum entre o vetor R e o vetor S!\n");
    }

    return 0;
}
