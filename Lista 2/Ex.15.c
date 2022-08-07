#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_15\n\n");
    float salario, novo_salario, aumento, taxa;
    int ID_cargo;
    printf ("Indique o codigo do cargo do funcionario: ");
    scanf ("%d",&ID_cargo);
    printf ("\nIndique o salario atual do funcionario: R$");
    scanf ("%f",&salario);
    switch (ID_cargo){
        case (101):
            taxa = 0.1; //10%
            break;
        case (102):
            taxa = 0.2; //20%
            break;
        case (103):
            taxa = 0.3; //30%
            break;
        default:
            taxa = 0.4; //40%
    }
    aumento = salario * taxa;
    novo_salario = salario + aumento;
    printf ("\n*******************************\n");
    printf ("Salario Antigo: R$%.2f\nAumento: R$%.2f\nNovo salario: R$%.2f",salario,aumento,novo_salario);
    printf ("\n*******************************\n");
    return 0;
}
