#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_13\n\n");
    float num=0.0,soma=0.0;
    while (num>=0){
        printf ("Insira um numero: ");
        scanf("%f",&num);
        if (num>=0){
            soma+=num;
        }
    }
    printf ("\nA soma dos numeros positivos informados %c %.2f!\n\n",130,soma);
    return 0;
}
