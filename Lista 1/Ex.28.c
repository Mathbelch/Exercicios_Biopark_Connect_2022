#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 28! \n\n");
    float Nota_1, Nota_2, media_final;
    int Peso_1 = 2, Peso_2 =3;
    printf ("\nIndique a nota 1: ");
    scanf ("%f", &Nota_1);
    printf ("Indique a nota 2: ");
    scanf ("%f", &Nota_2);
    media_final = ((Peso_1*Nota_1)+(Peso_2*Nota_2))/(Peso_1+Peso_2);

    printf ("\nMedia final do(a) aluno(a): %.1f\n ", media_final);
    return 0;
}
