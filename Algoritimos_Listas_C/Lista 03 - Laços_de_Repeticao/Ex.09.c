#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_09\n\n");
    int qtd=0, i=1;
    float numero;
    while(i<=20){
        printf ("Insira o %d%c numero: ",i,167);
        scanf("%f",&numero);
        if (numero>8){
            qtd=qtd+1;
        }
        i++;
    }
    if (qtd==1){
        printf ("\nNo total, 1 numero %c maior do que 8!\n",130);
    }else if (qtd==0){
        printf ("\nNenhum dos numeros %c maior do que 8!\n",130);
    }else {
        printf ("\nNo total, %d numeros sao maiores do que 8!\n",qtd);
    }


    return 0;
}
