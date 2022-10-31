#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_22\n\n");
    int km_percurso=4000,contador_cidades=1;
    float km_percorrido,km_total=0;
    do{
        printf("%d parada - Insira a distancia percorrida (Km): ",contador_cidades);
        scanf("%f",&km_percorrido);
        km_total+=km_percorrido;
        contador_cidades++;
        printf("Km percorrido ate o momento: %.1fKm!\n",km_total);
        printf("\n************************************************\n");
    } while (km_total<km_percurso);
    return 0;
}
