#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_03\n\n");
    char nome[15];
    printf ("Indique seu primeiro nome: ");
    scanf ("%s", nome);
    for (int i=1;i<=10;i++){
        printf ("%d - %s\n",i,nome);
    }
    return 0;
}
