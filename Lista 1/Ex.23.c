#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 23 \n\n");
    float altura_pessoa, altura_sombra_pessoa, altura_sombra_predio, altura_predio;
    printf("Indique sua altura em metros: ");
    scanf ("%f", &altura_pessoa);
    printf ("\nIndique a altura de sua sombra em metros: ");
    scanf ("%f", &altura_sombra_pessoa);
    printf ("\nIndique a altura da sombra do predio em metros: ");
    scanf ("%f", &altura_sombra_predio);
    altura_predio = ((altura_pessoa*altura_sombra_predio)/altura_sombra_pessoa);
    printf("\nA altura do predio e de aproximadamente %.2f metros.\n", altura_predio);


    return 0;
}
