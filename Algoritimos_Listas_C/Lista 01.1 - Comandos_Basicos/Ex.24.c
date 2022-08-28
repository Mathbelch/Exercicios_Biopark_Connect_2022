#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 24 \n\n");
    float refresco, agua, suco;
    printf("Indique quantos litros de refresco deseja fazer: ");
    scanf ("%f",&refresco);
    agua = (refresco/5)*4;
    suco = (refresco/5);
    printf ("\nPara %.2fL de refresco sera necessario %.2fL de agua e %.2fL de suco.\n", refresco, agua, suco);

    return 0;
}
