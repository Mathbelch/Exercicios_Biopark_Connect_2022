#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 07!\n\n");

    int dia, mes, dias_totais;
    printf ("Informe o dia de hoje: ");
    scanf ("%d", &dia);
    printf ("\nInforme o mes de hoje (1 a 12): ");
    scanf ("%d", &mes);
    dias_totais = (((mes-1)*30)+dia);
    printf ("\nData de hoje: %02d/%02d \nSe passaram %d dias desde o inicio do ano!\n ", dia, mes, dias_totais);


    return 0;
}
