#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 37! \n\n");
    int numero, tab1, tab2, tab3, tab4, tab5, tab6, tab7, tab8, tab9, tab10;
    printf ("Indique um numero inteiro: ");
    scanf ("%d", &numero);
    tab1 = numero * 1;
    tab2 = numero * 2;
    tab3 = numero * 3;
    tab4 = numero * 4;
    tab5 = numero * 5;
    tab6 = numero * 6;
    tab7 = numero * 7;
    tab8 = numero * 8;
    tab9 = numero * 9;
    tab10 = numero * 10;
    printf ("\nTabuada de %d: ");
    printf ("\n%d X 1 = %d", numero, tab1);
    printf ("\n%d X 2 = %d", numero, tab2);
    printf ("\n%d X 3 = %d", numero, tab3);
    printf ("\n%d X 4 = %d", numero, tab4);
    printf ("\n%d X 5 = %d", numero, tab5);
    printf ("\n%d X 6 = %d", numero, tab6);
    printf ("\n%d X 7 = %d", numero, tab7);
    printf ("\n%d X 8 = %d", numero, tab8);
    printf ("\n%d X 9 = %d", numero, tab9);
    printf ("\n%d X 10 = %d\n", numero, tab10);
    return 0;
}
