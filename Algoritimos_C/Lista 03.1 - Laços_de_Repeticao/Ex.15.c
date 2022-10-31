#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("Exercicio_15\n\n");
    setlocale (LC_ALL, "Portuguese");
    int num;
    double fatorial = 1; // deixei como double pois para numeros maiores do que 30, se declarado com inteiro, o resultado do fatorial fica como zero!
    printf("Insira o número inteiro que deseja obter o fatorial: ");
    scanf ("%d",&num);
    for (int i=1;i<=num;i++){
        fatorial = fatorial*i;
    }
    printf ("\nO resultado de %d! é %lf.\n",num,fatorial);
    return 0;
}
