#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void codigo_morse(int numero);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_01_E\n");
    int numero;
    printf("Insira um dígito entre 0 e 9 para convertê-lo à código morse: ");
    scanf("%d",&numero);
    codigo_morse(numero);
    return 0;
}

void codigo_morse(int numero)
{
    switch (numero)
    {
    case (0):
        printf("_ _ _ _ _");
        break;
    case(1):
        printf("_ _ _ _");
        break;
    case (2):
        printf(". . _ _ _");
        break;
    case (3):
        printf(". . . _ _");
        break;
    case (4):
        printf(". . . . _");
        break;
    case (5):
        printf(". . . . .");
        break;
    case (6):
        printf("_ . . . .");
        break;
    case (7):
        printf("_ _ . . .");
        break;
    case (8):
        printf("_ _ _ . .");
        break;
    case (9):
        printf("_ _ _ _ .");
    }
    return;
}
