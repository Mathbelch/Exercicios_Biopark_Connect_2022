#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 02\n");

    int numero_cavalos, numero_ferraduras;
    printf ("Indique o numero de cavalos comprados:\n");
    scanf ("%d", &numero_cavalos);
    numero_ferraduras = 4 * numero_cavalos;
    printf ("\nPara %d cavalos sao necessarias %d ferraduras!\n", numero_cavalos, numero_ferraduras);




    return 0;
}
