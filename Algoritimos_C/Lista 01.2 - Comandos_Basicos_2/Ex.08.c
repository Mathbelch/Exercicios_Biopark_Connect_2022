#include <stdio.h>
#include <stdlib.h>

int checar_bissesto (int ano);

int main()
{
    int ano;
    printf("Exercicio_11\n");
    printf("Insira o ano que deseja verificar: ");
    scanf("%d",&ano);
    if (checar_bissesto(ano))
    {
        printf("O ano %d eh bissesto!\n",ano);
    }
    else
    {
        printf("O ano %d nao eh bissesto!\n",ano);
    }
    return 0;
}

int checar_bissesto (int ano)
{
    if ((ano%400==0)||((ano%4==0)&&((float)ano!=0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
