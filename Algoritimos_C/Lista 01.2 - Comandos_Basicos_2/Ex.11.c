#include <stdio.h>
#include <stdlib.h>

float ler_cordenada(char eixo);
int buscar_quadrante (float x,float y);

int main()
{
    printf("Exercicio_14\n");
    float x = ler_cordenada('X');
    float y = ler_cordenada('Y');
    printf("\n(%f,%f)...\n",x,y);
    int quadrante = buscar_quadrante(x,y);
    if (quadrante < 10){
        printf("O par ordenado esta no %d quadrante!\n",quadrante);
    }
    else
    {
        printf("\nO valor digitado esta na interface %d!\n",quadrante);
    }

    return 0;
}

float ler_cordenada(char eixo)
{
    float valor;
    printf("Insira a cordenada %c: ",eixo);
    scanf("%f",&valor);
    return valor;
}
int buscar_quadrante (float x,float y)
{
    if (y == 0)
    {
        if(x > 0)
        {
            return 23;
        }
        else if (x < 0)
        {
            return 14;
        }
    }
    else if (x == 0)
    {
        if (y > 0)
        {
            return 12;
        }
        else if (y < 0)
        {
            return 13;
        }

    }
     else if (x < 0)
    {
        if (y < 0)
        {
            return 3;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (y > 0)
        {
            return 2;
        }
        else
        {
            return 4;
        }
    }
    return;
}

