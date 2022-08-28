#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 32! \n\n");
    float peso_kilos, peso_gramas;
    printf("Insira seu peso em quilos: ");
    scanf("%f", &peso_kilos);
    peso_gramas = peso_kilos*1000;
    printf("\nSeu peso de %.2fKg equivale a %.2f gramas!\n", peso_kilos, peso_gramas);
    return 0;
}
