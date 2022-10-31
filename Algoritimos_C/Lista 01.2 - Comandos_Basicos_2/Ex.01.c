#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f_de_x(float x);

int main()
{
    float x;
    double fx;
    printf("\nExercicio_03\n");
    printf ("Insira um numero real para calcularmos a f(x): ");
    scanf("%f",&x);
    fx = f_de_x(x);
    printf ("\n f(x) = %f",fx);
    return 0;
}

double f_de_x(float x){
    double f_de_x = ((sqrt(x)) + (x/2) + (pow(x,x)));
    return f_de_x;
}
