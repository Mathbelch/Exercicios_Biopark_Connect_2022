#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 34! \n\n");
    float lado, area;
    printf ("Indique o tamanho (em cm) do lado do quadrado: ");
    scanf ("%f", &lado);
    area = pow(lado, 2);
    printf ("\nA area de um quadrado de lado %.2fcm e %.2fcm2!\n", lado, area);

    return 0;
}
