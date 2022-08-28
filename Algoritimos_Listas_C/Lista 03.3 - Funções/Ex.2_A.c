#include <stdio.h>
#include <stdlib.h>

double encontrar_fatorial (int numero);

int main()
{
    int numero;
    double resultado;
    printf("Exercicio_02.A\n\n");
    printf ("Digite o numero para obter o fatorial: ");
    scanf ("%d",&numero);
    resultado = encontrar_fatorial(numero);
    printf("%d! = %lf",numero,resultado);
    return 0;
}

double encontrar_fatorial (int numero){
    if (numero<=0){
        return (double)1;
    }
    else{
        double resultado = 1;
        for (int i=numero;i>1;i--){
            resultado= (double)resultado * i;
        }
        return resultado;
    }
}
