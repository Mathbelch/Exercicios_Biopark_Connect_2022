#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 10!\n\n");

    float X1, Y1, X2, Y2, dif_x, dif_y, result;
    printf("Para o primeiro ponto, informe: \n-X1: ");
    scanf ("%f", &X1);
    printf("-Y1: ");
    scanf ("%f", &Y1);

    printf("\nPara o segundo ponto, informe: \n-X2: ");
    scanf ("%f", &X2);
    printf("-Y2: ");
    scanf ("%f", &Y2);

    dif_x = pow (X2 - X1, 2);
    dif_y = pow (Y2 - Y1, 2);
    result = sqrt (dif_x+dif_y);

    printf ("\nDistancia entre os pontos 1 (%.1f , %.1f) e 2 (%.1f , %.1f) = %.1f\n", X1, Y1, X2, Y2, result);


    return 0;
}
