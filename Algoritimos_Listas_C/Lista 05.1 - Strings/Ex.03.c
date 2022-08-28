#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int encontrar_posicao_palavra (char texto[], char palavra[]);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int TAM1 = 200, TAM2 = 50;
    char texto[TAM1],palavra[TAM2];
    printf("Insira o texto: ");
    gets(texto);
    printf("Insira a palavra que deseja buscar: ");
    gets(palavra);
    printf("\nA palavra digitada está na %d posição!\n", encontrar_posicao_palavra(texto,palavra));
    return 0;
}

int encontrar_posicao_palavra (char texto[], char palavra[]){
    int posicao = -1;
    int c=0;
    int tamanho_util_texto = strlen(texto);
    int tamanho_util_palavra = strlen(palavra);
    for (int i = 0; i <= tamanho_util_texto;i++){
        if (texto[i]==palavra[0]){
            int contador=i;
            for (int j = 0; j <= tamanho_util_palavra; j++){
                if (palavra[j]==texto[contador]){
                    contador++;
                    posicao = i;
                    c++;
                    if (c==tamanho_util_palavra)
                        return posicao;
                } else {
                    posicao = -1;
                    c=0;
                    break;
                }
            }
        }
    }
    return posicao;
    }


