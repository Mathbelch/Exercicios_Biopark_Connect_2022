#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_13\n\n");
    float valor, novo_valor;
    int qtd_nota_100=0,qtd_nota_50=0,qtd_nota_10=0,qtd_nota_5=0,qtd_nota_1=0;
    printf ("Indique o valor: R$");
    scanf ("%f", &valor);
    novo_valor = valor;
    if (valor>=100){
        qtd_nota_100 = (int)valor/100;
        novo_valor -= (qtd_nota_100*100);
    }
    if (novo_valor>=50){
        qtd_nota_50 = (int)novo_valor/50;
        novo_valor -= (qtd_nota_50*50);
    }
    if (novo_valor>=10){
        qtd_nota_10 = (int)novo_valor/10;
        novo_valor -= (qtd_nota_10*10);
    }
    if (novo_valor>=5){
        qtd_nota_5 = (int)novo_valor/5;
        novo_valor -= (qtd_nota_5*5);
    }
    if (novo_valor>=1){
        qtd_nota_1 = (int)novo_valor/1;
        novo_valor -= (qtd_nota_1*1);
    }
    printf ("\n\nValor: R$%.2f", valor);
    printf ("\nRelacao de notas: %d notas de R$100,00; %d notas de R$50,00 ; %d notas de R$10,00 ; %d notas de R$5,00 ; %d notas de R$1,00\n\n", qtd_nota_100, qtd_nota_50, qtd_nota_10, qtd_nota_5, qtd_nota_1);
    if(novo_valor>0){
        printf("\nRestou R$%.2f do valor inicial!\n",novo_valor);
    }

    return 0;
}
