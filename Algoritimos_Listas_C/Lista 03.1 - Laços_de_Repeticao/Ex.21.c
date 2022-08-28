#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_21\n");
    int mesas_fumantes = 25, mesa_nao_fumantes = 25;
    char resp[2];
    do {

        printf ("\n** Deseja uma mesa na área de fumantes (A) ou de não fumantes (B)? \n");
        fflush(stdin);
        gets(resp);
        if (strcmp(resp,"A")==0){
            if (mesas_fumantes==0){
                printf("Não há mais mesas disponíveis na área de fumantes!\n");
            } else{
            mesas_fumantes--;
            printf("Mesas restantes na área de fumantes: %d \n",mesas_fumantes);
            }

        } else if (strcmp(resp,"B")==0){
            if (mesa_nao_fumantes==0){
                printf("Não há mais mesas disponíveis na área de não fumantes!\n");
            } else{
            mesa_nao_fumantes--;
            printf("Mesas restantes na área de não fumantes: %d \n",mesa_nao_fumantes);
            }

        } else {
            printf("!! opção inválida !!\n");
        }
    }   while (mesas_fumantes > 0 || mesa_nao_fumantes > 0);

    return 0;
}
