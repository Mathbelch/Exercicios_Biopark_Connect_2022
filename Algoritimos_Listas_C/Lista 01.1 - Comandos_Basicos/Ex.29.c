#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 29! \n\n");
    float preco_inicial, desconto, preco_final;
    printf ("Indique o preco inicial do produto: R$");
    scanf ("%f", &preco_inicial);
    desconto = 10; //Assim podemos alterar facilmente o desconto, ao inves de coloca-lo direto na formula.
    preco_final = preco_inicial * ((100-desconto)/100);
    printf ("\nPreco final = R$%.2f\n", preco_final);
    return 0;
}
