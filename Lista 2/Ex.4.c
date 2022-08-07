#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_4\n\n");
    float num, resultado;
    printf ("Insira um numero: ");
    scanf ("%f", &num);
    if (num>=0){
        resultado = num * 2;
    } else {
        resultado = num * 3;
    }

    printf ("O resultado eh: %.2f\n", resultado);
    return 0;
}
