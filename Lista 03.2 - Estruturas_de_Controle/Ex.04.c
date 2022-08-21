#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int checar_aprox_log (int numero);

int main()
{
    printf("Exercicio_01_D\n");
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Insira o valor que deseja buscar uma aproximação logaritima de 10: ");
    scanf("%i",&numero);
    int valor = checar_aprox_log (numero);
    printf("\nO logaritimo de 10 mais proximo de %d é: %d.\n",numero,valor);
    return 0;
}

int checar_aprox_log (int numero)
{
    int valor = 1;
    int resultado = numero;
    while (resultado/10 >= 1)
    {
        resultado = resultado/10;
        valor++;
    }
    return valor;
}
