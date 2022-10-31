#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int contarPalavras(char texto[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int TAM = 200;
    char texto[TAM];

    printf("Insira o texto: ");
    gets(texto);
 o   printf("\nO número de palavras foi: %d\n", contarPalavras(texto));
    return 0;
}

int contarPalavras(char texto[]){
    int posicao = 0; //representa a posição que estou avaliando
    int numPalavras = 0; //num. de palavras encontradas.
    int indicadora_encontrou_letra;
    int tamanho_util = strlen(texto); //mostra o tamanho util da string, encontrando o \0.

    while (posicao < tamanho_util){
        indicadora_encontrou_letra = 0;
        while (posicao < tamanho_util && texto[posicao]==' '){
            posicao++;

        }
        while (posicao < tamanho_util && toupper(texto[posicao]) >= 'A' && toupper(texto[posicao]) <= 'Z'){
            posicao++;
            indicadora_encontrou_letra = 1;
        } if (indicadora_encontrou_letra == 1){
            numPalavras++;
        }
    }
    return numPalavras;
}
