#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 09!\n\n");
    int qtd_camiseta_pequena, qtd_camiseta_media, qtd_camiseta_grande;
    float preco_camiseta_pequena = 10, preco_camiseta_media = 12, preco_camiseta_grande = 15, valor_arrecadado;
    printf ("Indique a quantidade de camisetas vendidas:");
    printf ("\nPequenas: ");
    scanf ("%d", &qtd_camiseta_pequena);
    printf ("Medias: ");
    scanf ("%d", &qtd_camiseta_media);
    printf ("Grandes: ");
    scanf ("%d", &qtd_camiseta_grande);
    valor_arrecadado = (preco_camiseta_pequena*qtd_camiseta_pequena)+(preco_camiseta_media*qtd_camiseta_media)+(preco_camiseta_grande*qtd_camiseta_grande);
    printf ("\nO total arrecadado foi de: R$%.2f\n", valor_arrecadado);






    return 0;
}
