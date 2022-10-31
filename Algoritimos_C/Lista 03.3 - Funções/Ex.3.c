#include <stdio.h>
#include <stdlib.h>

int fibonacci (int numero);

int main()
{
    printf("Exercicio_03\n\n");
    printf("Insira o numero: ");
    int numero;
    scanf("%d",&numero);
    int num_fibonacci = fibonacci(numero);
    printf ("Num_fibonacci = %d.\n",num_fibonacci);
    return 0;
}

int fibonacci (int numero){
    int i=1,j=2,w=3,a;
    int num_fibonacci = 0;
    if (numero==0){
        num_fibonacci=0;
    } else if (numero==1){
        num_fibonacci=1;
    } else if (numero<0){
        printf("Insira um valor inteiro e positivo!");
    } else {
        do {
            a=j+w;
            i=j;
            j=w;
            w=a;
            if (i>=numero){
                num_fibonacci=i;
                break;
            } else if (j>=numero){
                num_fibonacci=j;
                break;
            } else if (w>=numero){
                num_fibonacci=w;
            }
        } while (num_fibonacci<=numero);

    }

    return num_fibonacci;
}
