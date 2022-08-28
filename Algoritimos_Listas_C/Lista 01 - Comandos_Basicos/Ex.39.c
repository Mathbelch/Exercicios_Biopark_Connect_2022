#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 39! \n\n");
    float salario = 1200, conta1 = 200, conta2 = 120, conta1_multa, conta2_multa, salario_restante;
    conta1_multa = conta1*1.02;
    conta2_multa = conta2*1.02;
    salario_restante = salario - (conta1_multa+conta2_multa);
    printf ("\nO restante do salario de Joao sera de R$%.2f\n", salario_restante);
    return 0;
}
