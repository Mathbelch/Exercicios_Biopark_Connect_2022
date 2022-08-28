#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_17\n\n");
    printf ("***************** MENU *****************\n");
    printf ("1 - Cachorro Quente: R$11,00");
    printf ("\n2 - Bauru: R$8,50");
    printf ("\n3 - Misto Quente: R$8,00");
    printf ("\n4 - Hamburguer: R$9,00");
    printf ("\n5 - Cheesburguer: R$10,00");
    printf ("\n6 - Refrigerante: R$4,50");
    printf ("\n****************************************\n\n");

    int ID_item, qtd;
    float preco_item, valor_final;

    printf("Indique o numero do item desejado: ");
    scanf ("%d",&ID_item);
    switch (ID_item){
        case (1):
            preco_item = 11.0;
            break;
        case (2):
            preco_item = 8.5;
            break;
        case (3):
            preco_item = 8.0;
            break;
        case (4):
            preco_item = 9.0;
            break;
        case (5):
            preco_item = 10.0;
            break;
        case (6):
            preco_item = 4.5;
            break;
        default:
            printf ("\nCodigo de item nao cadastrado!\n");
            exit (0);
    }
    printf ("\nInforme a quantidade de itens desejados: ");
    scanf ("%d",&qtd);
    valor_final = qtd*preco_item;
    printf ("\n****************************************\n");
    printf ("Item: %d - R$%.2f - quantidade: %d\nTotal: R$%.2f",ID_item,preco_item,qtd,valor_final);
    printf ("\n****************************************\n");

    return 0;
}
