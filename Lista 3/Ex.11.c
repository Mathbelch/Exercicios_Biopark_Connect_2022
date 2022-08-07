#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_11\n\n");
    float num;
    int qtd=0;
    for (int i=1;i<=20;i++){
        printf ("Insira o %d%c numero: ",i,167);
        scanf ("%f",&num);
        if ((num>=0)&&(num<=100)){
            qtd+=1;
        }
    }
    if (qtd==1){
    printf ("\n\nNo total, 1 numero esta entre 0 e 100!\n");
    }else if (qtd==0){
        printf ("\n\nNenhum dos numeros esta entre 0 e 100!\n");
    }else {
        printf ("\n\nNo total, %d numeros estao entre 0 e 100!\n",qtd);
    }

    return 0;
}
