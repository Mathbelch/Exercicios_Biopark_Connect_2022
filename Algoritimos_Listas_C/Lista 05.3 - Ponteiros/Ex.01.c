#include <stdio.h>
#include <stdlib.h>

int main() {

    // Vamos declarar uma variavel inteira (tam) e um vetor (vet) que ir� apontar para ela.
    int tam, *vet;

    //Vamos pedir para o usu�rio digitar o tamanho do vetor e vamos alocar o valor na vari�vel inteira tam.
    printf("TAM: ");
    scanf("%d", &tam);

    // Vamos usar malloc para alocar um vetor de inteiros de tamanho igual � tam, usando o ponteiro vet para manipular o vetor.
    vet = malloc( tam * sizeof(int) );

    // Vamos checar se a aloca��o foi bem sucedida: se o ponteiro vet for nulo, indica que n�o est� apontando para nenhum local.
    if(vet == NULL) {
        printf("Erro!\n");
        return 666;
    }

    /* Se o ponteiro vet for diferente de nulo, a aloca��o foi bem sucedida e podemos preencher o vetor com seus valores, usando o
     ponteiro vet para manipular o �ndice do vetor */
    for(int i=0; i<tam; i++) {
        vet[i] = i;
    }

    // Da mesma forma poderiamos imprimir na tela com o conteudo do vetor usando o ponteiro.
    for(int i=0; i<tam; i++) {
        printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
        printf("Preenchendo vet[%d]", vet[i]);
    }

    //Como fizemos aloca��o din�mica, devemos agora liberar o ponteiro vet.
    free(vet);


    return 0;
}
