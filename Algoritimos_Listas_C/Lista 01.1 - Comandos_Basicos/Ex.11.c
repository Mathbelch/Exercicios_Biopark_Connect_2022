#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11!\n\n");
    int dias_totais;
    printf ("Indique a quantidade de dias sem acidentes: ");
    scanf ("%d", &dias_totais);

    int anos = dias_totais/360;
    int meses = ((dias_totais - (anos *360))/30);
    int dias = (dias_totais - ((anos *360)+(meses * 30)));

    printf ("\n\nO total de tempo sem acidentes foi de %d anos, %d meses e %d dias!\n\n", anos, meses, dias);




    return 0;
}
