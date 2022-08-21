#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_06\n\n");
    int N =10, Vetor_Idades[N],maior,menor,posicao_maior,posicao_menor;
    printf ("Insira a idade da 1° pessoa: ");
    scanf ("%d",&Vetor_Idades[0]);
    maior = Vetor_Idades[0];
    menor = Vetor_Idades[0];
    posicao_maior = 0;
    posicao_menor = 0;
    for (int i=1;i<N;i++){
        printf ("Insira a idade da %d° pessoa: ",i+1);
        scanf ("%d",&Vetor_Idades[i]);
        if (Vetor_Idades[i]>maior){
            maior = Vetor_Idades[i];
            posicao_maior = i;
        }
        if (Vetor_Idades[i]<menor){
            menor = Vetor_Idades[i];
            posicao_menor = i;
        }
    }
    printf ("\nA pessoa mais velha possui %d anos e está na posição %d do vetor.",maior,posicao_maior);
    printf ("\nA pessoa mais nova possui %d anos e está na posição %d do vetor.",menor,posicao_menor);
    return 0;
}
