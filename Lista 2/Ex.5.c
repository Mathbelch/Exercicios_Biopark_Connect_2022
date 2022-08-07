#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_5\n\n");
    int num, resultado;
    printf ("Insira um numero: ");
    scanf ("%d", &num);
    if (num%2 == 0){
        resultado = num + 5;
    } else {
        resultado = num + 8;
    }
    printf ("\nRESULTADO: %d!\n", resultado);
    return 0;
}
