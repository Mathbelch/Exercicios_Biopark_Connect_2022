#include <stdio.h>
#include <stdlib.h>

float conversao_C_F (char current, float temp1);
char T1,T2;

int main()
{
    printf("Exercicio_10\n");
    char current;
    float temp1;
    printf("Indique se deseja fazer a conversao de Fahrenheit (F) ou Celsius (C): ");
    scanf("%c",&current);
    printf("Indique a temperatura que deseja converter: " );
    scanf("%f",&temp1);
    float temp2 = conversao_C_F (current,temp1);
    printf ("\n --> %.1f %c = %.1f %c !\n\n",temp1,T1,temp2,T2);
    return 0;
}

float conversao_C_F (char current, float temp1){
    float temp2;
    if (current == 'F'){
        temp2 = ((temp1 - 32)/1.8);
        T1 = 'F';
        T2 = 'C';
    } else if (current == 'C'){
        temp2 = ((temp1*1.8)+32);
        T1 = 'C';
        T2 = 'F';
    } else {
        printf("\nOpcao de temperatura invalida, insira F ou C!\n");
        return 0;
    }
    return temp2;
}
