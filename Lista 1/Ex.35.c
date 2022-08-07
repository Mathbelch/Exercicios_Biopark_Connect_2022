#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 35! \n\n");
    float diagonal_maior, diagonal_menor, area;
    printf ("Indique a diagonal maior do losango (em cm): ");
    scanf ("%f", &diagonal_maior);
    printf("\nIndique a diagonal menor do losango (em cm): ");
    scanf ("%f", &diagonal_menor);
    area = (diagonal_menor * diagonal_maior)/2;
    printf("\nArea do losango e de %.2fcm2!\n", area);
    return 0;
}
