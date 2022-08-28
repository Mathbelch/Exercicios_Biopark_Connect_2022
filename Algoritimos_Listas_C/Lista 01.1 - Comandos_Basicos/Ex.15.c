#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Exercicio 15!\n\n");
    float Total, Felipe;
    int Divisao;
    printf ("Insira o valor da conta: R$");
    scanf ("%f", &Total);
    Divisao = Total/3;
    Felipe = Total - (Divisao*2);
    printf("\nCarlos e Andre devem pagar R$%d e Felipe deve pagar R$%.2f.\n",(int)Divisao, Felipe);

    return 0;
}
