#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_05\n\n");
    float numero,soma=0.0;
    for (int i=1;i<=10;i++){
        printf ("Insira o %d%c numero: ",i,167);
        scanf ("%f",&numero);
        soma = soma + numero;
    }
    printf ("\n\nA soma dos numeros informados eh: %.2f\n\n",soma);


    return 0;
}
