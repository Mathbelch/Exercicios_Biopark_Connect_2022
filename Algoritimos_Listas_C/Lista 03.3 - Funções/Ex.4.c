#include <stdio.h>
#include <stdlib.h>

int encontrar_primo_menor_igual_a_n(int numero);

int main()
{
    printf("Exercicio_04\n\n");
    int numero,primo_menor_igual_a_n;
    printf("Insira o numero: ");
    scanf("%d",&numero);
    primo_menor_igual_a_n = encontrar_primo_menor_igual_a_n(numero);
    printf("Resposta = %d!",primo_menor_igual_a_n);
    return 0;
}

int encontrar_primo_menor_igual_a_n(int numero){
    for (int i = numero; i > 3; i--){
        int primo = 1;
        for (int j = i - 1; j > 1; j--){
            if (i%j==0){
                primo=0;
            }
        }if (primo==1){
            return(i);
        }
    } return(3);
}
