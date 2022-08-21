#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 01\n");

    float Largura, Comprimento, Area;
    printf ("Indique a largura do terreno (metros): ");
    scanf ("%f", &Largura);
    printf ("Indique o comprimento do terreno (metros): ");
    scanf ("%f", &Comprimento);
    Area = Largura * Comprimento;
    printf("\nDimensoes: \n-largura = %.2f m;\n-comprimento = %.2f m", Largura, Comprimento);
    printf("\nA area do terreno e de: %.2f m2\n", Area);

    return 0;
}
