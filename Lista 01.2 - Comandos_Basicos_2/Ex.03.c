#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler_dimensoes_triangulo();
float area_triangulo(float base,float altura);

float base,altura;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("\nExercicio_05\n");
    ler_dimensoes_triangulo();
    printf("\nArea = %.2f metros²\n",area_triangulo(base,altura));
    return 0;
}

void ler_dimensoes_triangulo(){
    printf ("Insira a base do triangulo em metros: ");
    scanf("%f",&base);
    printf ("Insira a altura do triangulo metros: ");
    scanf("%f",&altura);
    return;
}

float area_triangulo(float base,float altura){
    float area = ((base*altura) / 2);
    return area;
}
