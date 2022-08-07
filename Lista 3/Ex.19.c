#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_19\n\n");
    float altura,maior,menor;
    int qtd=15;
    printf("Insira a altura da 1%c pessoa em metros: ",167);
    scanf("%f",&altura);
    maior=altura;
    menor=altura;
    for (int i=2;i<=qtd;i++){
        printf("Insira a altura da %d%c pessoa em metros: ",i,167);
        scanf("%f",&altura);
        if (altura>maior){
            maior=altura;
        }
        if (altura<menor){
            menor=altura;
        }
    }
    printf("\n********************************\n");
    printf("MAIOR ALTURA: %.2f metros!\n",maior);
    printf("MENOR ALTURA: %.2f metros!\n",menor);
    return 0;
}
