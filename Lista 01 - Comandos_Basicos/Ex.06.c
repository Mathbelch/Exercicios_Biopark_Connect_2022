#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 06!\n\n");

    float preco_kg, peso_prato, valor_a_pagar;
    preco_kg = 12.00;
    printf ("Indique o peso do prato em Kg: ");
    scanf ("%f", &peso_prato);
    valor_a_pagar = peso_prato*preco_kg;
    printf ("\nO valor a pagar e de R$%.2f!\n", valor_a_pagar);

    return 0;
}
