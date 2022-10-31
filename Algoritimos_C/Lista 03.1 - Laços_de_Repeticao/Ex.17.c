#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_17\n\n");
    float preco_kg=23.59,peso_prato,preco_bebida,total_conta;
    int contador=1;
    do
    {
        printf("Cliente %d:",contador);
        printf("\nInforme o peso do prato (Kg): ");
        scanf("%f",&peso_prato);
        printf("Informe o valor das bebidas: R$");
        scanf("%f",&preco_bebida);
        total_conta=((peso_prato*preco_kg)+preco_bebida);
        printf("Total da conta: R$%.2f",total_conta);
        printf("\n**************************************\n");
        contador++;
    }
    while ((peso_prato!=0)||(preco_bebida!=0));
    return 0;
}
