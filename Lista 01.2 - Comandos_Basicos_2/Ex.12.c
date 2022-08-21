#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void situacao_trabalhador (char sexo, int idade, int tempo_contribuicao);

int main()
{
    printf("\nExercicio_15\n");
    setlocale(LC_ALL,"Portuguese");
    char sexo;
    int tempo_contribuicao = 0, idade = 0;
    fflush(stdin);
    printf("Indique o sexo do trabalhador (M ou F): ");
    scanf("%c",&sexo);
    printf("Indique a idade do trabalhador (anos): ");
    scanf("%d",&idade);
    printf("Indque o tempo de contribuição (anos): ");
    scanf("%d",&tempo_contribuicao);
    situacao_trabalhador(sexo,idade,tempo_contribuicao);
    return 0;
}

void situacao_trabalhador (char sexo, int idade, int tempo_contribuicao)
{
    if ((sexo == 'M')||(sexo == 'm'))
    {
        if (idade >= 65)
        {
            if (tempo_contribuicao >= 10)
            {
                printf("\nAposentavel\n");
                return;
            }
            else
            {
                printf("\nNão Aposentavel\n");
                return;
            }
        }
        else if ((idade >= 63) && (idade < 65))
        {
            if (tempo_contribuicao >= 15)
            {
                printf("\nAposentavel\n");
                return;
            }
            else
            {
                printf("\nNão Aposentavel\n");
                return;
            }
        }
        else
        {
            printf("\nNão Aposentavel\n");
            return;
        }
    }
    else if ((sexo == 'F') || (sexo == 'f'))
    {
        if (idade >= 63)
        {
            if (tempo_contribuicao >= 10)
            {
                printf("\nAposentavel\n");
                return;
            }
            else
            {
                printf("\nNão Aposentavel\n");
                return;
            }
        }
        else if ((idade >= 61)&&(idade < 63))
        {
            if (tempo_contribuicao >= 15)
            {
                printf("\nAposentavel\n");
                return;
            }
            else
            {
                printf("\nNão Aposentavel\n");
                return;
            }
        }
        else
        {
            printf("\nNão Aposentavel\n");
            return;
        }
    }
    else
    {
        printf("\nDados Inválidos\n");
        return;
    }
}
