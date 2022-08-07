#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 25 \n\n");
    float altura, raio, Pi, volume;
    Pi = 3.14;
    printf("Indique a altura (em metros) da caixa d'agua: ");
    scanf("%f", &altura);
    printf ("\nIndique o raio (em metros) da caixa d'agua: ");
    scanf("%f", &raio);
    volume = Pi * altura * (raio * raio);
    printf ("\nO volume da caixa d'agua e de %.2f m3. \n", volume);
    return 0;
}
