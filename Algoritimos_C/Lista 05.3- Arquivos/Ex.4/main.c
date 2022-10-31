#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_03\n");
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
    char aux;
    char vogais[] = {'a','A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    while(fscanf(arquivo_texto,"%c",&aux) != EOF)
    {
        for (int i = 0; i < 10; i++)
        {
            if (vogais[i] == aux)
            {
                counter++;
                break;
            }
        }
    }
    printf("O texto possui %d vogais.\n",counter);
    fclose(arquivo_texto);
    return 0;
}
