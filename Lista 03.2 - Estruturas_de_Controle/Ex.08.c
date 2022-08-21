#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("Exercicio_01_H\n");
    setlocale(LC_ALL,"Portuguese");
    printf ("Pense em um número inteiro e positivo entre 0 e 1000: ");
    printf ("\nIndique se o número mostrado é igual (=), maior (>) ou menor (<) do que o seu número: \n");
    int min = 0, max = 1000, chute;
    char resposta;
    do
    {
        chute = (min + max)/2;
        printf ("Seu número é %d ? ",chute);
        fflush(stdin); // para limpar o enter após a digitação do usuário.
        scanf("%c",&resposta);
        if (resposta == '>')
        {
            max = chute;
        }
        else if (resposta == '<')
        {
            min = chute;
        }
    }
    while (resposta != '=');
    return 0;
}
