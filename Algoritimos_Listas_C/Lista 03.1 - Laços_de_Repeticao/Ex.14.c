#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    printf("Exercicio_14\n\n");
    char resp[5];
    do {
        fflush (stdin);
        printf ("Ol�, tudo bem?");
        gets(resp);
    }
    while (strcmp(resp,"sim")!=0);


    return 0;
}
