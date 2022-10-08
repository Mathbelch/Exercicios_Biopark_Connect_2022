#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_02\n");
    FILE *arquivo_texto;
    char nomeArq[100];
    int counter = 1;
    printf("Insira o nome do arquivo: ");
    scanf("%s", nomeArq);
    arquivo_texto = fopen(nomeArq, "r");
    if (arquivo_texto == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    char aux;
    while(fscanf(arquivo_texto,"%c",&aux) != EOF)
    {
        if (aux == '\n')
        counter ++;
    }
    fclose(arquivo_texto);
    printf("\nO arquivo contem %d linhas!\n", counter);
    return 0;
}
