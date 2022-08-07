#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_07\n");
    int i=1,soma=0,idade_min=18,idade;
    while (i<=20){
        printf ("Insira a idade da %d%c pessoa: ",i,167);
        scanf ("\n%d",&idade);
        if (idade>=idade_min){
            soma+=1;
        }
        i++;
    }
    printf ("\nNo total, %d pessoas sao maiores de idade!\n",soma);
    return 0;
}
