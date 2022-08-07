#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 19 \n\n");
    int qtd_frangos;
    float gasto_total;
    printf("\nIndique a quantidade de frangos que se tem na granja: ");
    scanf ("%d", &qtd_frangos);
    gasto_total = (qtd_frangos*4)+(qtd_frangos*7);
    printf ("Para marcar todos os %d frangos sera gasto R$%.2f\n\n", qtd_frangos, gasto_total);

    return 0;
}
