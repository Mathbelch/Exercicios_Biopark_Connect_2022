#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 22 \n\n");
    int qtd_1, qtd_5, qtd_10, qtd_25, qtd_50, qtd_1_real;
    float total;
    printf("Indique a quantidade de moedas de cada tipo: ");
    printf("\n\n1 centavo: ");
    scanf ("%d", &qtd_1);
    printf("5 centavos: ");
    scanf ("%d", &qtd_5);
    printf("10 centavos: ");
    scanf ("%d", &qtd_10);
    printf("25 centavos: ");
    scanf ("%d", &qtd_25);
    printf("50 centavos: ");
    scanf ("%d", &qtd_50);
    printf("1 real: ");
    scanf ("%d", &qtd_1_real);
    total = (qtd_1*0.01)+(qtd_5*0.05)+(qtd_10*0.1)+(qtd_25*0.25)+(qtd_50*0.5)+(qtd_1_real);
    printf ("\n\nParabens Pedrinho, voce juntou R$%.2f!\n", total);

    return 0;
}
