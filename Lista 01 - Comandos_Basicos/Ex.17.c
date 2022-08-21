#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 17 \n\n");
    float Temp_C, Temp_F;
    printf("Indique a temperatura em C: ");
    scanf ("%f", &Temp_C);
    Temp_F = ((Temp_C*1.8)+32);
    printf("\n%.1f C = %.1f F\n", Temp_C, Temp_F);

    return 0;
}
