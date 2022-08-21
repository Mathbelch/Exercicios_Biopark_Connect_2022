#include <stdio.h>
#include <stdlib.h>

double encontrar_fatorial (int numero);

int main()
{
    printf("Exercicio_02.B\n\n");
    printf ("FATORIAIS: \n");
    double resultado;
    for (int numero=1;numero<=20;numero++){
        resultado = encontrar_fatorial(numero);
        printf("%d! = %.0f\n",numero,resultado);
    }
    return 0;
}


double encontrar_fatorial (int numero){
    if (numero<=0){
        return (double)1;
    }
    else{
        double resultado = 1;
        for (int i=numero;i>1;i--){
            resultado *= i;
        }
        return resultado;
    }
}
