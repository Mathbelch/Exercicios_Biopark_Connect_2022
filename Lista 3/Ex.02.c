#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_02\n\n");
    int n1, n2, soma=0;
    printf ("-->Informe o primeiro valor inteiro do intervalo: ");
    scanf ("%d", &n1);
    printf ("\n-->Informe o segundo valor inteiro do intervalo: ");
    scanf ("%d", &n2);
    for (int i=n1;i<=n2;i++){
        soma +=i;
    }
    printf ("\n\nO resultado do somatorio no intervalo dado (%d a %d) eh de %d\n\n",n1,n2,soma);

    return 0;
}
