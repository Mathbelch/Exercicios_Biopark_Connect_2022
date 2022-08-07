#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_10\n\n");
    int qtd=0,i=1,num;
    while (i<=20){
        printf ("Insira o %d%c numero: ",i,167);
        scanf("%d",&num);
        if (num%2==0){
            qtd +=1;
        }
        i++;
    }
    if (qtd==1){
    printf ("\n\nNo total, 1 numero %c par!\n",130);
    }else if (qtd==0){
        printf ("\n\nNenhum dos numeros %c par!\n",130);
    }else {
        printf ("\n\nNo total, %d numeros sao pares!\n",qtd);
    }
    return 0;
}
