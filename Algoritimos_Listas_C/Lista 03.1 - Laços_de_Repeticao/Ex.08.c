#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_08\n");
    char nome[15],nome_pessoa_mais_nova[15];
    int idade,idade_pessoa_mais_nova=200,i=1;
    while (i<=10){
        fflush(stdin);
        printf ("\nInsira o nome da %d%c pessoa: ",i,167);
        gets(nome);
        printf ("Insira a idade da %d%c pessoa: ",i,167);
        scanf ("%d",&idade);
        if (idade<=idade_pessoa_mais_nova){
            idade_pessoa_mais_nova=idade;
            strcpy(nome_pessoa_mais_nova,nome);
        }
        i++;
    }
    printf ("\nO nome da pessoa mais nova %c %s, com %d anos de idade!\n",130,nome_pessoa_mais_nova,idade_pessoa_mais_nova);
    return 0;
}
