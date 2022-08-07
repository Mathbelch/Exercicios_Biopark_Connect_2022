#include <stdio.h>
#include <stdlib.h>
// pela ASCII - 167 (int) = ° (char)
int main()
{
    printf("Exercicio_06\n");
    int i=1,soma=0,idade=0;
    float media;
    while (i<=20){
        printf ("Insira a idade da %d%c pessoa: ",i,167);
        scanf ("\n%d",&idade);
        soma +=idade;
        i++;
    }
    media = soma/20.0;
    printf ("\nA m%cdia das idades %c: %.2f anos!\n",130,130,media);
    return 0;
}
