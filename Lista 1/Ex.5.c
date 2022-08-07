#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 05\n\n");

    float preco_gasolina_litro;
    float valor_pagamento;

    printf ("Indique o preco da gasolina por litro: R$");
    scanf ("%f", &preco_gasolina_litro);
    printf("\nIndique o valor gasto: R$");
    scanf ("%f", &valor_pagamento);

    float litros_tanque = valor_pagamento/preco_gasolina_litro;
    printf ("\nForam colocados aproximadamente %.3fL de gasolina no tanque\n", litros_tanque);


    return 0;
}
