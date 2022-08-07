#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_16\n\n");
    int qtd;
    float preco,total;
    printf ("Informe a quantidade de produtos comprados pelo cliente: ");
    scanf ("%d",&qtd);
    for (int i=1;i<=qtd;i++){
        printf ("Informe o preco do %d° produto: ",i);
        scanf ("%f",&preco);
        total+=preco;
    }
    printf ("*********************************************************");
    printf ("\nTotal da compra: %.2f.\n\n",total);

    return 0;
}
