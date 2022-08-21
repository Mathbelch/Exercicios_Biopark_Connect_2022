#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_9\n\n");
    int ID, limite_inferior = 6, limite_superior = 7;
    float nota_1, nota_2, nota_3, media_final_aluno;
    printf ("Indique o ID do aluno: ");
    scanf ("%d", &ID);
    printf ("\n- Nota 1: ");
    scanf ("%f", &nota_1);
    printf ("\n- Nota 2: ");
    scanf ("%f", &nota_2);
    printf ("\n- Nota 3: ");
    scanf ("%f", &nota_3);
    printf ("\n***********************");
    media_final_aluno = (nota_1+nota_2+nota_3)/3;
    printf("\nNOTA FINAL: %.2f",media_final_aluno);
    printf ("\n***********************");
    if (media_final_aluno<limite_inferior){
        printf ("\nAluno %d REPROVADO!\n\n", ID);
    } else if ((media_final_aluno>=limite_inferior)&&(media_final_aluno<limite_superior)){
        printf("\nAluno %d de Recuperacao!\n\n",ID);
    }else{
        printf ("\nAluno %d APROVADO!\n\n", ID);
    }

    return 0;
}
