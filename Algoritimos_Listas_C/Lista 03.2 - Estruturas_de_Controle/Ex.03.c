#include <stdio.h>
#include <stdlib.h>

int pedir_inteiro(char nome);
void checar_divisores(int divisor, int nao_divisor, int limite_superior, int limite_inferior);

int main()
{
    printf("Exercicio_01_C\n");
    int n, m, limite_superior = 200, limite_inferior = 1;
    char divisor = 'n', nao_divisor = 'm';
    n = pedir_inteiro (divisor);
    m = pedir_inteiro (nao_divisor);
    checar_divisores (n, m, limite_superior, limite_inferior);
    return 0;
}

int pedir_inteiro(char nome)
{
    int inteiro;
    printf("Insira o valor de %c: ",nome);
    scanf("%d",&inteiro);
    return inteiro;
}

void checar_divisores(int divisor, int nao_divisor, int limite_superior, int limite_inferior)
{
    for (int i = limite_inferior; i <= limite_superior; i++)
    {
        if ((i%divisor == 0)&&(i%nao_divisor != 0))
        {
            printf("\n%d;",i);
        }
    }
    return;
}
