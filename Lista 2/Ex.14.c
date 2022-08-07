#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_14\n\n");
    float valor_tabela, imposto, taxa;
    int ano_fabricacao;
    printf ("Informe o ano de fabricacao do veiculo: ");
    scanf ("%d",&ano_fabricacao);
    printf ("\nInforme o valor de tabela do veiculo: R$");
    scanf ("%f",&valor_tabela);
    if (ano_fabricacao<1990){
        taxa = 0.01; //1%.
    } else{
        taxa = 0.015; //1,5%
    }
    imposto = (valor_tabela*taxa);
    printf ("\nImposto a ser pago: R$%.2f\n",imposto);
    return 0;
}
