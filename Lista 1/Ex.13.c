#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13!\n\n");
    int num, centena, dezena, unidade;
    printf ("Insira um numero inteiro de ate 3 digitos: ");
    scanf ("%d", &num);
    centena = num/100;
    dezena = (num -(centena*100))/10;
    unidade = (num - (centena*100)-(dezena*10));
    printf ("\nCENTENA = %d", centena);
    printf ("\nDEZENA = %d", dezena);
    printf ("\nUNIDADE = %d\n", unidade);



    return 0;
}
