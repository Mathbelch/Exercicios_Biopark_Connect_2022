#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 18 \n\n");
    float horas_normais, horas_extras, salario_bruto, salario_liquido;
    printf("Indique o total de horas normais trabalhadas no mes: ");
    scanf ("%f", &horas_normais);
    printf("\nIndique o total de horas extras trabalhadas no mes: ");
    scanf ("%f", &horas_extras);
    salario_bruto = (horas_normais * 10) +  (horas_extras * 15);
    salario_liquido = salario_bruto*0.9;
    printf("\n\nSalario bruto: R$%.2f \nSalario liquido: R$%.2f", salario_bruto, salario_liquido);
    return 0;
}
