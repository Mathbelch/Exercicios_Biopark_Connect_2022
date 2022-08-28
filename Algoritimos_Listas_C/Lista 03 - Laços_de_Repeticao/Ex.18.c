#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_18\n\n");
    int qtd_alunos;
    float nota1,nota2,media;
    printf("Indique a quantidade de alunos da turma: ");
    scanf("%d",&qtd_alunos);
    printf ("\n");
    for (int i=1;i<=qtd_alunos;i++){
        printf("Aluno %d\n",i);
        printf("Insira a nota 1: ");
        scanf("%f",&nota1);
        printf("Insira a nota 2: ");
        scanf("%f",&nota2);
        media=(nota1+nota2)/2;
        if (media>=6.0){
            printf("Aluno %d aprovado com media %.1f!",i,media);
        } else {
            printf("Aluno %d reprovado com media %.1f!",i,media);
        }
        printf("\n**********************************\n");
    }
    return 0;
}
