#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 16!\n\n");

    int qtd_sand;
    float qtd_queijo, qtd_presunto, qtd_carne;
    printf ("Indique a quantidade de sandwiches que deseja fazer: ");
    scanf ("%d", &qtd_sand);

    qtd_queijo = qtd_sand*2*0.05;
    qtd_presunto = qtd_sand*0.05;
    qtd_carne = qtd_sand *0.1;

    printf("\nPara fazer %d sandwiches sera necessario: \n %.2fKg de queijo.\n %.2fKg de presunto.\n %.2fKg de carne.\n", qtd_sand, qtd_queijo, qtd_presunto, qtd_carne);


    return 0;
}
