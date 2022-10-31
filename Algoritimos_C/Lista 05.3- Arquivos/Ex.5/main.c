#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_04\n");
    FILE *arquivo_texto;
    char nomeArq[100];
    int counterVowel = 0, counterConsonant = 0;
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
        int vowelFlag = 0;
        for (int i = 0; i < 10; i++)
        {
            if (vogais[i] == aux)
            {
                counterVowel++;
                vowelFlag = 1;
                break;
            }
        }
        if ((vowelFlag == 0) && ((aux > 'a' && aux < 'z')||(aux > 'A' && aux < 'Z')))
            {
                counterConsonant++;
            }
    }
    fclose(arquivo_texto);
    printf("O texto possui %d vogais e %d consoantes.\n",counterVowel, counterConsonant);
    return 0;
}
