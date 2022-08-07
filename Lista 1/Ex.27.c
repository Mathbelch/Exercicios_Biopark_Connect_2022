#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 27! \n\n");
    float num_1, num_2, divis;
    printf("Insira o primeiro numero (divisor): ");
    scanf ("%f", &num_1);
    printf("\nInsira o segundo numero (dividendo): ");
    scanf ("%f", &num_2);
    if (num_2 == 0){
        printf("\nO dividendo nao pode ser zero, insira um valor valido!\n");
    }   else {
            divis = num_1/num_2;
            printf("\n%.2f / %.2f = %.2f\n", num_1, num_2, divis);
    }
    return 0;
}
