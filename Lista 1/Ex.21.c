#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 21 \n\n");
    int qtd_lata, qtd_garrafa_grande, qtd_garrafa_pq;
    float total_L;
    printf("Indique o numero de unidades compradas: ");
    printf ("\nLata (350mL): ");
    scanf ("%d", &qtd_lata);
    printf ("Garrafa (600mL): ");
    scanf ("%d", &qtd_garrafa_pq);
    printf ("Garrafa (2L): ");
    scanf ("%d", &qtd_garrafa_grande);
    total_L = (qtd_lata*0.35)+(qtd_garrafa_pq*0.6)+(qtd_garrafa_grande*2);
    printf ("No total comprou-se %.2fL de refrigerante.\n", total_L);
}
