#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_8\n\n");
    fflush (stdin);
    float preco_etiqueta,preco_final;
    int parcela;
    char cond;
    printf("Condicoes de pagamento disponiveis:");
    printf ("\nA - A vista em dinheiro ou cheque com 10 porcento de desconto.");
    printf ("\nB - A vista no cartao com 15 porcento de desconto.");
    printf ("\nC - Em duas vezes, com preco normal.");
    printf ("\nD - Em duas vezes com juros de 10 porcento.");

    printf ("\nIndique o preco normal de etiqueta do produto: R$");
    scanf ("%f",&preco_etiqueta);
    printf ("\nIndique o codigo da condicao de pagamento escolhida:");
    scanf ("%s", &cond);
    printf ("%c", cond);

     if ((cond=='A')||(cond=='a')) {
        parcela = 1;
        preco_final = preco_etiqueta*0.9;
    } else if ((cond=='B')||(cond=='b')){
        parcela = 1;
        preco_final = preco_etiqueta*0.85;
    } else if ((cond=='C')||(cond=='c')){
        parcela = 2;
        preco_final = preco_etiqueta;
    }else if ((cond=='D')||(cond=='d')){
        parcela = 2;
        preco_final = preco_etiqueta*1.1;
    } else{
        printf ("\n\nOpcao de pagamento invalida!\n");
        exit (0);
    }
    printf ("\n\nDe acordo com a condicao escolhida (%c) para a compra de R$%.2f, o valor final a ser pago eh de R$%.2f em %d vezes.\n",cond, preco_etiqueta, preco_final,parcela);

    return 0;
}
