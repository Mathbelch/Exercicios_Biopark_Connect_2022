#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_6\n\n");
    int valor_1, valor_2, valor_3, maior, menor, meio;
    printf ("Insira apenas numeros inteiros e diferentes!\n");
    printf ("Insira o primeiro numero que deseja comparar: ");
    scanf ("%d", &valor_1);
    printf ("Insira o segundo numero que deseja comparar: ");
    scanf ("%d", &valor_2);
    printf ("Insira o terceiro numero que deseja comparar: ");
    scanf ("%d", &valor_3);

    if ((valor_1 > valor_2) && (valor_1 > valor_3)) {
        maior = valor_1;
        if (valor_2 > valor_3){
            meio = valor_2;
            menor = valor_3;
        } else {
            meio = valor_3;
            menor = valor_2;
        }
    } else if ((valor_2 > valor_1) && (valor_2 > valor_3)){
        maior = valor_2;
        if (valor_1 > valor_3) {
            meio = valor_1;
            menor = valor_3;
        } else {
            meio = valor_3;
            menor = valor_1;
        }
    } else {
        maior = valor_3;
        if (valor_1 > valor_2) {
            meio = valor_1;
            menor = valor_2;
        } else {
            meio = valor_2;
            menor = valor_1;
        }
    }

    if ((valor_1==valor_2)||(valor_1==valor_3)||(valor_2==valor_3)){
        printf ("Teste inconclusivo, favor inserir valores inteiros e diferentes!\n");
    } else {
        printf ("\nO resultado eh: %d > %d > %d!\n", maior, meio, menor);
    }
    return 0;
}
