#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Exercicio_11\n\n");
    int nivel, qtd_aula_semana;
    float valor_hora_aula, constante;
    constante = 4.5;
    printf ("Indique o nivel do professor(1 a 3): ");
    scanf ("%d",&nivel);
    printf ("\nIndique a quantidade de horas/aulas semanais do professor: ");
    scanf ("%d",&qtd_aula_semana);
    switch (nivel){
    case (1):
        valor_hora_aula =12.0;
        break;
    case (2):
        valor_hora_aula =17.0;
        break;
    case (3):
        valor_hora_aula =25.0;
        break;
    default:
        printf("\nNivel nao cadastrado!\n");
    }
    printf ("\nO salario do professor eh de R$%.2f",valor_hora_aula*qtd_aula_semana*constante);


    return 0;
}
