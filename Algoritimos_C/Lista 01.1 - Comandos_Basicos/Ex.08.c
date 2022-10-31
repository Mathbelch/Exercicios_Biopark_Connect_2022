#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 08!\n\n");

    char Aluno[15];
    printf ("Indique o nome do(a) aluno(a): ");
    scanf ("%s", Aluno);

    float Nota1, Nota2, Nota3, media_final;
    int Peso1 = 1, Peso2 = 2, Peso3 = 3;
    printf ("\nIndique a nota 1: ");
    scanf ("%f", &Nota1);
    printf ("Indique a nota 2: ");
    scanf ("%f", &Nota2);
    printf ("Indique a nota 3: ");
    scanf ("%f", &Nota3);
    media_final = ((Peso1*Nota1)+(Peso2*Nota2)+(Peso3*Nota3))/(Peso1+Peso2+Peso3);

    printf ("\nMedia do(a) aluno(a) %s: %.2f\n ", Aluno, media_final);
    return 0;
}
