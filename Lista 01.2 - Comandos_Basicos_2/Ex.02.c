#include <stdio.h>
#include <stdlib.h>

void troca_de_variaveis();

int x,y;

int main()
{
    printf("Exercicio_04\n");
    printf ("Insira x: ");
    scanf ("%d",&x);
    printf ("Insira y: ");
    scanf ("%d",&y);
    printf ("\nX = %d ;\nY = %d ;\n\n",x,y);
    troca_de_variaveis();
    printf ("\nX = %d ;\nY = %d ;\n\n",x,y);
    return 0;
}

void troca_de_variaveis(){
    x = x + y;
    y = x - y;
    x = x - y;
return;
}
