#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_04\n\n");
    char nome[20];
    int N;
    printf ("Indique seu primeiro nome: ");
    scanf ("%s", nome);
    printf ("\nIndique quantas vezes deseja visualizar seu nome (N): ");
    scanf ("%d", &N);

    for (int i=1;i<=N;i++){
        printf ("%d - %s\n",i,nome);
    }
    return 0;
}

