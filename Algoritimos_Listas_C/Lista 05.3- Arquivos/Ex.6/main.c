#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_05\n");
    FILE *arquivo_texto;
    char nomeArq[100];
    int counter = 0;
    printf("Insira o nome do arquivo: ");
    fflush(stdin);
    scanf("%s", nomeArq);
    arquivo_texto = fopen(nomeArq, "r");
    if (arquivo_texto == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    char buscado, aux;
    printf("Insira o caractere que deseja buscar: ");
    fflush(stdin);
    scanf("%c", &buscado);
    while(fscanf(arquivo_texto,"%c",&aux) != EOF)
    {
        if (aux == buscado)
        {
            counter++;
        }

    }
    fclose(arquivo_texto);
    printf("O texto possui %d vezes o caractere %c.\n",counter, buscado);
    return 0;
}
