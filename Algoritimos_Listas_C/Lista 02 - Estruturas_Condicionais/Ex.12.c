#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_12\n\n");
    float x, y, z;
    printf ("Insira os valores que deseja verificar: ");
    printf ("\n- Valor 1: ");
    scanf ("%f", &x);
    printf ("\n- Valor 2: ");
    scanf ("%f", &y);
    printf ("\n- Valor 3: ");
    scanf ("%f", &z);

    if ((x<(y+z))&& (y<(x+z))&& (z<(x+y))){
        printf("\nOs valores informados podem formar um triangulo!\n");
        printf("******Processando tipo de triangulo*******");
        if ((x==y)&&(y==z)&&(x==z)){
            printf ("\nTipo: Equilatero!\n");
        } else if ((x!=y)&&(x!=z)&&(y!=z)){
            printf ("\nTipo: Escaleno!\n");
        } else {
            printf ("\nTipo: Isosceles!\n");
        }

    } else{
        printf("\nOs valores informados nao podem formar um triangulo!\n");
    }

    return 0;
}
