#include <stdio.h>
#include <stdlib.h>

int numeros_achar_maior(int qtd,int numeros[]);
int numeros_achar_menor(int qtd,int numeros[]);

int main()
{
    printf("\nExercicio_01_A\n");
    int qtd = 3;
    int numeros[qtd];
    int maior = numeros_achar_maior(qtd,numeros); // aqui vamos ler os três números em um vetor, e já econtrar o maior valor.
    int menor = numeros_achar_menor(qtd,numeros);
    printf ("Maior numero = %d\nMenor numero = %d\n",maior,menor);
    return 0;
}

int numeros_achar_maior(int qtd, int numeros[])
{
    int maior;
    printf ("Insira o 1%c numero: ",167);
    scanf("%d",&numeros[0]);
    maior = numeros[0];
    for (int i = 1; i < qtd; i++)
    {
        printf ("Insira o %d%c numero: ",i + 1,167);
        scanf("%d",&numeros[i]);
        if (numeros[i] > maior) //se o numero inserido for maior do que o numero que está sendo o menor, fazemos a troca
        {
            maior = numeros[i];
        }

    }
    return maior;
}
int numeros_achar_menor(int qtd,int numeros[])
{
    int menor = numeros[0];
    for (int i = 1 ; i < qtd; i++)
    {
        if(numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    return menor;
}
