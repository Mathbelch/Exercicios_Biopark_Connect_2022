#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 40! \n\n");
    float cateto1, cateto2, hipotenusa;
    printf ("Insira o valor do primeiro cateto do triangulo (cm): ");
    scanf ("%f", &cateto1);
    printf ("Insira o valor do segundo cateto do triangulo (cm): ");
    scanf ("%f", &cateto2);
    hipotenusa = sqrt(pow(cateto1,2)+ pow(cateto2, 2));
    printf ("\nValor da hipotenusa = %.2fcm\n ", hipotenusa);
    return 0;
}
