#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_2\n\n");
    int num, resto;
    printf ("Indique um numero: ");
    scanf ("%d", &num);
    resto = num%2;
    if (resto == 0){
        printf ("\nO numero %d eh par!\n", num);
    } else {
        printf ("\nO numero %d eh impar!\n", num);
    }

    return 0;
}
