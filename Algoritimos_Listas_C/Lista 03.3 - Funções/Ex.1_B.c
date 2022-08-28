#include <stdio.h>
#include <stdlib.h>

void calculo_potencia_completa ();
void calculo_potencia_unica (int base, int expoente);


int main()
{
    printf("Exercicio_01.B\n\n");
    calculo_potencia_completa();
    return 0;
}

void calculo_potencia_completa (){
    for (int base=2;base<=10;base++){
        for (int expoente=0;expoente<=10;expoente++){
           calculo_potencia_unica (base,expoente);
        }
        printf("\n***************************************\n");
    }

}

void calculo_potencia_unica (int base, int expoente){
        printf("%d %c %d = %d \n",base,94,expoente,base*expoente);
    }

