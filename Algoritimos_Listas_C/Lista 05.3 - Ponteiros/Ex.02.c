#include <stdio.h>
#include <stdlib.h>

int main() {

    // Vamos declarar uma variável linha, uma coluna e um ponteiro de ponteiro chamado mat.
    int lin, col, **mat;

    // Atribuindo valores fixos a linha e coluna:
    lin = 5;
    col = 3;

    // Vamos usar a malloc para alocar primeiro as linhas da matriz com o ponteiro de ponteiros mat.
    mat = malloc(lin * sizeof(int*) );

    // Cada linha formada (i) é um novo ponteiro,que agora iremos usar para alocar as colunas, com uma nova malloc.
    for(int i=0; i<lin; i++) {
        mat[i] = malloc(col * sizeof(int) );
    }


    // Agora vamos preencher a matriz normalmente usando loops, e o ponteiro para ponteiros mat[i][j], onde i são linhas e j colunas da matriz.
    for(int i=0; i<lin; i++) {
        for(int j=0; j<col; j++) {
            mat[i][j] = i + j;
        }
    }


    // Da mesma forma podemos imprimir o conteúdo dessa matriz.
    for(int i=0; i<lin; i++) {
        for(int j=0; j<col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Para podermos liberar o ponteiro mat, devemos antes liberar os ponteiros (colunas) formados para cada linha
    for(int i=0; i<lin; i++) {
        free(mat[i]);
    }

    // Por fim podemos liberar o ponteiro principal, que libera as linhas
    free(mat);

    return 0;
}
