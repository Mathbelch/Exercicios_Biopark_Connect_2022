#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_07\n");

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

    FILE *output = fopen("output.txt", "w");
    if (output == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    char aux;
    while(fscanf(arquivo_texto,"%c",&aux) != EOF)
    {
        if ((aux == 'A') || (aux == 'a')|| (aux == 'E')|| (aux == 'e')|| (aux == 'I')|| (aux == 'i')|| (aux == 'O')|| (aux == 'o')|| (aux == 'U')|| (aux == 'u'))
        {
            fprintf(output,"%c", '*');
        }
        else
        {
            fprintf(output,"%c", aux);
        }
    }

    fclose(arquivo_texto);
    fclose(output);
    return 0;
}
