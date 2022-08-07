#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 03\n\n");

    int paes_vendidos, broas_vendidas;
    float custo_unitario_pao = 0.12;
    float custo_unitario_broa = 1.5;

    printf ("Indique a quantidade de paes vendidos hoje:");
    scanf ("%d", &paes_vendidos);
    printf ("\nIndique a quantidade de broas vendidas hoje:");
    scanf ("%d", &broas_vendidas);

    float arrecadado_paes = custo_unitario_pao * paes_vendidos;
    float arrecadado_broas = custo_unitario_broa * broas_vendidas;
    float arrecadado_total = arrecadado_broas + arrecadado_paes;
    float guardar = arrecadado_total * 0.1;

    printf ("\nHoje arrecadou-se um total de R$ %.2f, e R$ %.2f deve ser guardado em poupanca!", arrecadado_total, guardar);
    printf ("\n\nOBS: do total arrecadado:\n-paes: R$ %.2f;\n-broas: R$ %.2f;\n", arrecadado_paes, arrecadado_broas);

    return 0;
}
