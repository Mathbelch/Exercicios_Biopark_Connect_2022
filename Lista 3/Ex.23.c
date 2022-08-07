#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_23\n\n");
    int qtd_casas=0,canal=0,qtd_pessoas_casa=0,total_pessoas=0,total_pessoas_canal_3=0,
        total_pessoas_canal_5=0,total_pessoas_canal_8=0,total_pessoas_canal_11=0,total_pessoas_canal_13=0,invalidos=0;
    float percentual_canal_3=0,percentual_canal_5=0,percentual_canal_8=0,percentual_canal_11=0,
          percentual_canal_13=0,percentual_invalido=0;

    printf("Indique a quantidade de casas participantes da pesquisa: ");
    scanf("%d",&qtd_casas);

    for (int i=1; i<=qtd_casas; i++)
    {
        printf("Casa %d. ",i);
        printf("\nCanal assistido: ");
        scanf("%d",&canal);
        printf("Quantidade de pessoas: ");
        scanf("%d",&qtd_pessoas_casa);
        total_pessoas+=qtd_pessoas_casa;
        switch (canal)
        {
        case 3:
            total_pessoas_canal_3+=qtd_pessoas_casa;
            break;
        case 5:
            total_pessoas_canal_5+=qtd_pessoas_casa;
            break;
        case 8:
            total_pessoas_canal_8+=qtd_pessoas_casa;
            break;
        case 11:
            total_pessoas_canal_11+=qtd_pessoas_casa;
            break;
        case 13:
            total_pessoas_canal_13+=qtd_pessoas_casa;
            break;
        default:
            invalidos+=qtd_pessoas_casa;
        }
    }
    percentual_canal_3 = (total_pessoas_canal_3/(float)total_pessoas)*100;
    percentual_canal_5 = (total_pessoas_canal_5/(float)total_pessoas)*100;
    percentual_canal_8 = (total_pessoas_canal_8/(float)total_pessoas)*100;
    percentual_canal_11 = (total_pessoas_canal_11/(float)total_pessoas)*100;
    percentual_canal_13 = (total_pessoas_canal_13/(float)total_pessoas)*100;
    percentual_invalido = (invalidos/(float)total_pessoas)*100;

    printf("\n*********RESULTADOS*********\n");
    printf("Canal 3:   %.1f%%\n",percentual_canal_3);
    printf("Canal 5:   %.1f%%\n",percentual_canal_5);
    printf("Canal 8:   %.1f%%\n",percentual_canal_8);
    printf("Canal 11:  %.1f%%\n",percentual_canal_11);
    printf("Canal 13:  %.1f%%\n",percentual_canal_13);
    printf("Invalidos: %.1f%%\n",percentual_invalido);
    printf("           %.0f%%\n",percentual_canal_3+
           percentual_canal_5+percentual_canal_8+
           percentual_canal_11+percentual_canal_13+
           percentual_invalido);

    return 0;
}
