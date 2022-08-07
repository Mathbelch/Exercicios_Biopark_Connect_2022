#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_12\n\n");
    float num;
    int qtd_entre_0_e_100=0,qtd_entre_101_e_200=0, qtd_maiores_que_200=0,i=1;

    while (i<=20){
        printf ("Insira o %d%c numero: ",i,167);
        scanf ("%f",&num);
        if ((num>=0)&&(num<=100)){
            qtd_entre_0_e_100+=1;
        } else if ((num>100)&&(num<=200)){
        qtd_entre_101_e_200+=1;
        } else if (num>200){
        qtd_maiores_que_200+=1;
        }
        i++;
    }

    if (qtd_entre_0_e_100==1){
    printf ("\n\nNo total, 1 numero esta entre 0 e 100!\n");
    }else if (qtd_entre_0_e_100==0){
        printf ("\n\nNenhum dos numeros esta entre 0 e 100!\n");
    }else {
        printf ("\n\nNo total, %d numeros estao entre 0 e 100!\n",qtd_entre_0_e_100);
    }

    if (qtd_entre_101_e_200==1){
    printf ("No total, 1 numero esta entre 101 e 200!\n");
    }else if (qtd_entre_101_e_200==0){
        printf ("Nenhum dos numeros esta entre 101 e 200!\n");
    }else {
        printf ("No total, %d numeros estao entre 101 e 200!\n",qtd_entre_101_e_200);
    }

    if (qtd_maiores_que_200==1){
    printf ("No total, 1 numero %c maior que 200!\n",130);
    }else if (qtd_maiores_que_200==0){
        printf ("Nenhum dos numeros %c maior que 200!\n",130);
    }else {
        printf ("No total, %d numeros sao maiores que 200!\n",qtd_maiores_que_200);
    }

    return 0;
}
