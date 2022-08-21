#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 33! \n\n");
    float base_maior, base_menor, altura, area;
    printf ("Indique a base maior do trapezio, em cm: ");
    scanf ("%f", &base_maior);
    printf("\nIndique a base menor do trapezio, em cm: ");
    scanf ("%f", &base_menor);
    printf ("\nIndique a altura do trapezio, em cm: ");
    scanf ("%f", &altura);
    area = (((base_maior + base_menor)*altura)/2);
    printf ("\nA area do trapezio e de: %.2f cm2\n", area);
    return 0;
}
