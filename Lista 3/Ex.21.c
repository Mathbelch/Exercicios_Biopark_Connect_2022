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

        printf ("\n** Deseja uma mesa na �rea de fumantes (A) ou de n�o fumantes (B)? \n");
        fflush(stdin);
        gets(resp);
        if (strcmp(resp,"A")==0){
            if (mesas_fumantes==0){
                printf("N�o h� mais mesas dispon�veis na �rea de fumantes!\n");
            } else{
            mesas_fumantes--;
            printf("Mesas restantes na �rea de fumantes: %d \n",mesas_fumantes);
            }

        } else if (strcmp(resp,"B")==0){
            if (mesa_nao_fumantes==0){
                printf("N�o h� mais mesas dispon�veis na �rea de n�o fumantes!\n");
            } else{
            mesa_nao_fumantes--;
            printf("Mesas restantes na �rea de n�o fumantes: %d \n",mesa_nao_fumantes);
            }

        } else {
            printf("!! op��o inv�lida !!\n");
        }
    }   while (mesas_fumantes > 0 || mesa_nao_fumantes > 0);

    return 0;
}
