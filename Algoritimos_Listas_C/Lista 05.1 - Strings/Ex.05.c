#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void receber_vetor_de_texto(char texto[],int Tam1);
void criar_vetor_ASCII(char vetor_ASCII[],int Tam2);
void comparar_vetores(char texto[],char vetor_ASCII[],int vetor_resposta[],int Tam1,int Tam2);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Desafio: Contagem_De_Tudo");

    return 0;
}
