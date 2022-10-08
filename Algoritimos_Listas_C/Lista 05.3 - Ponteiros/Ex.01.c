#include <stdio.h>
#include <stdlib.h>

int main() {

    // Vamos declarar uma variavel inteira (tam) e um vetor (vet) que irá apontar para ela.
    int tam, *vet;

    //Vamos pedir para o usuário digitar o tamanho do vetor e vamos alocar o valor na variável inteira tam.
    printf("TAM: ");
    scanf("%d", &tam);

    // Vamos usar malloc para alocar um vetor de inteiros de tamanho igual à tam, usando o ponteiro vet para manipular o vetor.
    vet = malloc( tam * sizeof(int) );

    // Vamos checar se a alocação foi bem sucedida: se o ponteiro vet for nulo, indica que não está apontando para nenhum local.
    if(vet == NULL) {
        printf("Erro!\n");
        return 666;
    }

    /* Se o ponteiro vet for diferente de nulo, a alocação foi bem sucedida e podemos preencher o vetor com seus valores, usando o
     ponteiro vet para manipular o índice do vetor */
    for(int i=0; i<tam; i++) {
        vet[i] = i;
    }

    // Da mesma forma poderiamos imprimir na tela com o conteudo do vetor usando o ponteiro.
    for(int i=0; i<tam; i++) {
        printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
        printf("Preenchendo vet[%d]", vet[i]);
    }

    //Como fizemos alocação dinâmica, devemos agora liberar o ponteiro vet.
    free(vet);


    return 0;
}
