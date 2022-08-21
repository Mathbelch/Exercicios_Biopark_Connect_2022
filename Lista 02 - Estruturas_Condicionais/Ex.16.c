#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_16\n\n");
    float saldo_medio;
    printf ("Indique o saldo medio do ultimo ano do cliente: R$");
    scanf ("%f",&saldo_medio);
    if (saldo_medio<=200){
        printf ("\nSaldo medio: R$%.2f -> Nenhum credito disponivel!\n",saldo_medio);
    } else if ((saldo_medio>200)&&(saldo_medio<=400)){
        printf ("\nSaldo medio: R$%.2f -> Credito de 20%% disponivel!\n",saldo_medio);
    } else if ((saldo_medio>400)&&(saldo_medio<=600)){
        printf ("\nSaldo medio: R$%.2f -> Credito de 30%% disponivel!\n",saldo_medio);
    }else {
        printf ("\nSaldo medio: R$%.2f -> Credito de 40%% disponivel!\n",saldo_medio);
    }
    return 0;
}
