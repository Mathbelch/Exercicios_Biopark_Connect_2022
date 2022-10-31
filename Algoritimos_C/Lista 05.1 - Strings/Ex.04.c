/*
fazer uma programa que gere uma versão de texto c/ todos os r e
rr trocados por l, exceto no final de uma palavra
*/

// ver código de resuloção do professor!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[100];
    fflush(stdin);
    printf("Insira seu texto: ");
    scanf("%[^\n]s",texto);
    int n = strlen(texto);
    for (int i = 0; i < n; i++)
    {
        if ((texto[i] == 'r' || texto[i] == 'R') && (texto[i+1] >= 'a')&&(texto[i+1] <= 'z'))
        {
            texto[i] = 'l';
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        if (texto[i] == 'l' && texto[i-1] == 'l')
        {
        ;
        }
        else
        {
            printf("%c", texto[i]);
        }
    }
     printf("\n");

    return 0;
}

