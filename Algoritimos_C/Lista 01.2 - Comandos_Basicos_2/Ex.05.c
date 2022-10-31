#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float calcule_area(float raio);
float calcule_perimetro(float raio);

int main()
{
    float raio;
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_07\n");
    printf("Insira o valor do raio do disco, em metros: ");
    scanf("%f",&raio);
    printf("\n -> ÁREA: %.2f m²",calcule_area(raio));
    printf("\n -> PERÍMETRO: %.2f m\n",calcule_perimetro(raio));
    return 0;
}

float calcule_area(float raio){
    float area = M_PI * pow(raio,2);
    return area;
}
float calcule_perimetro(float raio){
    float perimetro = 2 * M_PI * raio;
    return perimetro;
}
