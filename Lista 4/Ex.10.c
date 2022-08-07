#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Ordenações pelo método selection sort!

int main()
{
    setlocale (LC_ALL,"Portuguese");
    printf("Exercicio_10\n\n");
    int Tam=10, vet[Tam],min,aux,max,aux2;

    for (int i=0;i<Tam;i++){
        printf ("Insira o %d° valor do vetor: ",i+1);
        scanf ("%d",&vet[i]);
    }

    printf ("\nVetor original: ");
    for (int i=0;i<Tam;i++){
        printf ("%d ",vet[i]);
    }

    for (int inicio=0;inicio<Tam;inicio++){
        min=inicio;
        for(int j=inicio+1;j<Tam;j++){
            if (vet[min]>vet[j]){
                    min=j;
            }
        }
        aux = vet[inicio];
        vet[inicio]=vet[min];
        vet[min]=aux;
    }

    printf ("\nVetor ordenado de forma crescente: ");
    for (int i=0;i<Tam;i++){
        printf("%d ",vet[i]);
    }

    for (int inicio=0;inicio<Tam;inicio++){
        max=inicio;
        for (int k=inicio+1;k<Tam;k++){
            if (vet[max]<vet[k]){
                max=k;
            }
        }
        aux2 = vet[inicio];
        vet[inicio]=vet[max];
        vet[max]=aux2;
    }

    printf ("\nVetor ordenado de forma decrescente: ");
    for (int i=0;i<Tam;i++){
        printf ("%d ",vet[i]);
    }

    printf ("\n\n");


    return 0;
}
