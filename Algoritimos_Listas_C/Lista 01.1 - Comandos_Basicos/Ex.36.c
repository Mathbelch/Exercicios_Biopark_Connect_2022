#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 36! \n\n");
    float salario_minimo, salario_funcionario, equivalencia;
    printf ("Indique o valor atual do salario minimo: R$");
    scanf ("%f", &salario_minimo);
    printf("\nIndique o valor do salario do funcionario: R$");
    scanf ("%f", &salario_funcionario);
    equivalencia = salario_funcionario/salario_minimo;
    printf("\nO salario do funcionario equivale a cerca de %.2f salarios minimos!\n", equivalencia);
    return 0;
}
