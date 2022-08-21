#include <stdio.h>
#include <stdlib.h>

double calculo_potencia (double base, int expoente);

int main()
{
    printf("Exercicio_01.A\n\n");
    double base, resultado;
    int expoente;
    printf ("Calculo de potencia: \n");
    printf ("Insira a base: ");
    scanf ("%lf",&base);
    printf ("Insira o expoente: ");
    scanf ("%d",&expoente);
    resultado = calculo_potencia(base,expoente);
    printf ("Resultado = %.2lf \n\n",resultado);
    return 0;
}

double calculo_potencia (double base, int expoente){
    double resultado=1;
    for (int i=1;i<=expoente;i++){
        resultado = resultado * base;
    }
    return resultado;
}
