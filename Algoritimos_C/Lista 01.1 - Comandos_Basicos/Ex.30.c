#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 30! \n\n");
    float salario_fixo, vendas, comissao, salario_final;
    printf ("Indique o valor do salario fixo do funcionario: R$");
    scanf ("%f", &salario_fixo);
    printf ("\nIndique o valor das vendas do funcionario: R$");
    scanf ("%f", &vendas);
    comissao = vendas*0.04;
    salario_final = salario_fixo+comissao;
    printf ("\nValor da comissao: R$%.2f", comissao);
    printf ("\nSalario final: R$%.2f\n", salario_final);

    return 0;
}
