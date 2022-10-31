#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float buscar_raiz (float num);

int main()
{
    setlocale(LC_ALL,"Potuguese");
    printf("\nExercicio_05\n");
    float num,raiz;
    printf("Insira o número decimal que deseje obter a raiz: ");
    scanf("%f",&num);
    raiz = buscar_raiz (num);
    printf ("\nRaiz de %f = %f.\n\n",num,raiz);
    return 0;
}

float buscar_raiz (float num){
    float raiz = sqrt(num);
    return(raiz);
}
