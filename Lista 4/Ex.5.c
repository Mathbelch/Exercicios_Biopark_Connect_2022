#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_05\n\n");
    int vetor_A[10],soma=0,qtd=0,soma2=0,qtd2=0;
    float media=0;
    for (int i=0;i<10;i++){
        printf ("Insira o %d° elemento do vetor: ",i+1);
        scanf ("%d",&vetor_A[i]);
        if (vetor_A[i]<15){
            soma=soma+vetor_A[i];
        } else if (vetor_A[i]==15){
            qtd++;
        } else if (vetor_A[i]>15){
            soma2=soma2+vetor_A[i];
            qtd2++;
        }
    }
    media=soma2/qtd2;
    printf ("\n\nVetor: [ ");
    for (int i=0;i<10;i++){
        printf ("%d ",vetor_A[i]);
    }
    printf ("]");
    printf ("\na)A soma dos elementos do vetor inferiores a 15 é: %d.",soma);
    printf ("\nb)A quantidade de elementos do vetor que são iguais a 15 é: %d.",qtd);
    printf ("\nc)A média dos elementos do vetor superiores a 15 é: %.1f.\n\n",media);
    return 0;
}
