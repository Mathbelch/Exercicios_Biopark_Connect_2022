#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 14!\n\n");
    float Raio_Pizza, Area_Pizza, Pi;
    Pi = 3.14;
    printf ("Insira o Raio da Pizza (em cm): ");
    scanf ("%f", &Raio_Pizza);
    Area_Pizza = Pi * pow(Raio_Pizza,2);
    printf("\n\n A area da pizza de raio %.2fcm e de %.2fcm2.\n\n",Raio_Pizza, Area_Pizza);

    return 0;
}
