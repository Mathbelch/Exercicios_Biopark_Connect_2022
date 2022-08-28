#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 20 \n\n");
    int qtd_blusas, qtd_novelos, novelos_por_blusa;
    printf ("Quantas blusas foram produzidas?\n");
    scanf("%d", &qtd_blusas);
    printf("Quantos novelos foram gastos?\n");
    scanf ("%d", &qtd_novelos);
    printf("\n\nGastou-se no total %.1f novelos por blusa.\n\n", qtd_novelos/(float)qtd_blusas);
    return 0;
}
