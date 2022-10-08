#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_06\n");
    FILE *arquivo_texto;
    char nomeArq[100];
    printf("Insira o nome do arquivo: ");
    fflush(stdin);
    scanf("%s", nomeArq);
    arquivo_texto = fopen(nomeArq, "r");
    if (arquivo_texto == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    char aux;
    char alfabeto[126];

    for(int i = 0; i < 126; i++)
    {
        alfabeto[i] = 0;
    }

    while(fscanf(arquivo_texto,"%c",&aux) != EOF)
    {
        alfabeto[(int)aux]++;
    }
    fclose(arquivo_texto);

    for(int i = 33; i < 126; i++)
    {
        if(alfabeto[i] != 0)
        {
            printf("O caractere %c aparece %d vezes.\n", i, alfabeto[i]);
        }
    }

    return 0;
}
