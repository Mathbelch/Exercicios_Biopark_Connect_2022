#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_10\n\n");
    int num_1, num_2;
    printf ("Insira o primeiro numero: ");
    scanf ("%d", &num_1);
    printf("\nInsira o segundo numero: ");
    scanf ("%d", &num_2);
    printf ("\n********************\n");
    if (num_1>num_2){
        printf("%d - %d = %d\n", num_1, num_2,num_1-num_2);
    } else {
        printf ("%d - %d = %d\n", num_2, num_1,num_2-num_1);
    }

    return 0;
}
