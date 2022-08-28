#include <stdio.h>
#include <stdlib.h>

void pedir_data(void);
int comparar_datas(void);

int dia_1,dia_2,mes_1,mes_2,ano_1,ano_2;

int main()
{
    printf("\nExercicio_13\n");
    pedir_data();
    int resposta = comparar_datas();
    if (resposta==0)
    {
        printf("\nAs datas informadas sao iguais!\n");
    }
    else if (resposta==1)
    {
        printf("\nMaior data: %d / %d / %d.\n",dia_1,mes_1,ano_1);
    }
    else if (resposta==2)
    {
        printf("\nMaior data: %d / %d / %d.\n",dia_2,mes_2,ano_2);
    }
    return 0;
}

void pedir_data()
{
    printf("DATA 1\n");
    printf("dia: ");
    scanf("%d",&dia_1);
    printf("mes: ");
    scanf("%d",&mes_1);
    printf("ano: ");
    scanf("%d",&ano_1);
    printf("DATA 2\n");
    printf("dia: ");
    scanf("%d",&dia_2);
    printf("mes: ");
    scanf("%d",&mes_2);
    printf("ano: ");
    scanf("%d",&ano_2);
    }

int comparar_datas(void)
{
    if (ano_1 > ano_2)
    {
        return 1;
    }
    else if (ano_2 > ano_1)
    {
        return 2;
    }
    else
    {
        if (mes_1 > mes_2)
        {
            return 1;
        }
        else if (mes_2 > mes_1)
        {
            return 2;
        }
        else
        {
            if (dia_1 > dia_2)
            {
                return 1;
            }
            else if (dia_2 > dia_1)
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
    }
}
