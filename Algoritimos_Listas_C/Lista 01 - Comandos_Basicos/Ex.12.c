#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12!\n\n");
    printf ("Indique o salario do funcionario: R$");
    float salario_inicial, salario_reajustado, salario_final;
    scanf ("%f", &salario_inicial);
    salario_reajustado = (salario_inicial*1.15);
    salario_final = (salario_reajustado*0.92);

    printf ("\n\nSalario inicial: R$%.2f \nSalario reajustado: R$%.2f \nSalario final: R$%.2f \n\n", salario_inicial, salario_reajustado, salario_final);


    return 0;
}
