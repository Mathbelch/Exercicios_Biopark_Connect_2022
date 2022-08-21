#include <stdio.h>
#include <stdlib.h>

void ordenacao_de_tres_numeros_crescente(int num1,int num2,int num3);
int primeiro,segundo,terceiro;

int main()
{
    int num1,num2,num3;

    printf("Exercicio_09\n");
    printf("Insira o primeiro número: ");
    scanf ("%d",&num1);
    printf("Insira o segundo número: ");
    scanf ("%d",&num2);
    printf("Insira o terceiro número: ");
    scanf ("%d",&num3);
    ordenacao_de_tres_numeros_crescente(num1,num2,num3);
    printf ("  %d < %d < %d \n\n",primeiro,segundo,terceiro);
    return 0;
}

void ordenacao_de_tres_numeros_crescente(int num1,int num2,int num3){
    if ((num1<num2)&&(num1<num3)){
            primeiro = num1;
            if (num2<num3){
                segundo = num2;
                terceiro = num3;
            } else if (num3<num2){
                segundo = num3;
                terceiro = num1;
            }
        } else if ((num2<num1)&&(num2<num3)){
            primeiro = num2;
            if (num1<num3){
                segundo = num1;
                terceiro = num3;
            } else if (num3<num1){
                segundo = num3;
                terceiro = num1;
            }
        } else if ((num3<num1)&&(num3<num2)){
            primeiro = num3;
            if (num1<num2){
                segundo = num1;
                terceiro = num2;
            } else if (num2<num1){
                segundo = num2;
                terceiro = num1;
            }
        }
        return;
}
