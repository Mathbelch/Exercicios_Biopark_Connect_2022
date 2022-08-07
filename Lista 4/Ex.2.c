#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");
    printf("Exercicio_02\n\n");
    int Tam = 20, vetor[Tam],qtd_pares=0,qtd_impares=0,qtd_maiores_que_50=0,qtd_menores_que_7=0;
    for (int i=0;i<Tam;i++){
        printf("Insira o %d° valor do vetor: ",i+1);
        scanf ("%d",&vetor[i]);
        if (vetor[i]%2==0){
            qtd_pares++;
        } else{
            qtd_impares++;
        }
        if (vetor[i]>50){
            qtd_maiores_que_50++;
        }
        if (vetor[i]<7){
            qtd_menores_que_7++;
        }
    }
    printf ("\nVetor: [");
    for (int i=0;i<Tam;i++){
        printf ("%d ",vetor[i]);
    }
    printf ("]");
    printf ("\na)%d números são pares. \nb)%d números são ímpares. \nc)%d números são maiores do que 50. \nd)%d números são menores do que 7.\n\n",qtd_pares,qtd_impares,qtd_maiores_que_50,qtd_menores_que_7);

    return 0;
}
