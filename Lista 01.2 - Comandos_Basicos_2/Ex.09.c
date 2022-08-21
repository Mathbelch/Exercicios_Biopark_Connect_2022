#include <stdio.h>
#include <stdlib.h>

void ler_lados_triangulo(float lado[3]);
void tipo_triangulo(float lado[3]);

int main()
{
    printf("Exercicio_12\n");
    float lado [3];
    ler_lados_triangulo(lado);
    tipo_triangulo(lado);
    return 0;
}

void ler_lados_triangulo(float lado[3])
{
    for (int i=0;i<3;i++)
    {
        printf("Insira o %d lado do triangulo: ",i+1);
        scanf("%f",&lado[i]);
    }
}

void tipo_triangulo(float lado[3])
{
    if ((lado[0]==lado[1])&&(lado[0]==lado[2]))
    {
        printf("\nO triangulo eh equilatero!\n");
    }
    else if ((lado[0]!=lado[1])&&(lado[0]!=lado[2])&&(lado[1]!=lado[2]))
    {
        printf("\nO triangulo eh escaleno!\n");
    }
    else
    {
        printf("\nO triangulo eh isosceles!\n");
    }
}

