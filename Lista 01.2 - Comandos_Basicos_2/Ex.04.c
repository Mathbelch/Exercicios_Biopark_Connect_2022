#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void ler_lados_triangulo ();
float calcular_area_por_heron();

float a,b,c;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_06\n");
    ler_lados_triangulo ();
    float area = calcular_area_por_heron();
    printf ("Area do triangulo é = %.2f m²\n\n",area);
    return 0;
}

void ler_lados_triangulo (){
    printf("Insira o valor do lado A em metros: ");
    scanf("%f",&a);
    printf("Insira o valor do lado B em metros: ");
    scanf("%f",&b);
    printf("Insira o valor do lado C em metros: ");
    scanf("%f",&c);
    return;
}

float calcular_area_por_heron(){
    float s = ((a+b+c)/2);
    float A = sqrt(s*(s-a)*(s-b)*(s-c));
    return A;
}
