#include <stdio.h>
#include <stdlib.h>

void primo(int numero, int *primo_1, int *primo_2);

int main()
{
    int m, p1, p2, *pp1, *pp2;
    pp1 = &p1;
    pp2 = &p2;
    printf("\nExercicio_08\n");
    printf("Insira um numero inteiro e positivo: ");
    scanf ("%d",&m);
    primo(m, pp1, pp2);
    printf("\nP1 = %d.\nP2 = %d.\n", *pp1, *pp2);

    return 0;
}

void primo (int numero, int *primo_1, int *primo_2)
{
    int found1 = 0;
    for (int i = numero - 1; i > 3; i--)
    {
        int flag_primo_1 = 1; //True
        for (int j = i - 1; j > 1; j --)
        {
            if (i % j == 0)
            {
                flag_primo_1 = 0; //False
                break;
            }
        }
        if (flag_primo_1)
        {
            *primo_1 = i;
            found1 = 1;
            break;
        }
    }
    if ((found1 == 0) && (numero > 3))
        *primo_1 = 3;
    else if ((found1 == 0) && (numero == 3))
        *primo_1 = 2;
    else if ((found1 == 0) && (numero == 2))
        *primo_1 = 1;

    for (int i = numero + 1; ; i++)
    {
        int flag_primo_2 = 1; //True
        for (int j = i - 1; j > 1; j --)
        {
            if (i % j == 0)
            {
                flag_primo_2 = 0; //False
                break;
            }
        }
        if (flag_primo_2)
        {
            *primo_2 = i;
            break;
        }
    }
}
