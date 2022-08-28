#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int checar_aprox_log (int numero);
void criar_vetor(int vetor_numeros[], int n, int numero);
void traduzir_para_morse (int vetor_numeros[],int n);
void codigo_morse (int numero);

int main()
{
    printf("Exercicio_01_F\n");
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Insira um número inteiro para convertê-lo à código morse: ");
    scanf("%d",&numero);
    int n = checar_aprox_log (numero); // permite obter a qtd de digitos que o numero digitado tem.
    int vetor_numeros[n];
    criar_vetor(vetor_numeros, n, numero);
    traduzir_para_morse(vetor_numeros,n);

    return 0;
}

int checar_aprox_log (int numero)
{
    int valor = 1;
    int resultado = numero;
    while (resultado/10 >= 1)
    {
        resultado = resultado/10;
        valor++;
    }
    return valor;
}

void criar_vetor(int vetor_numero[], int n, int numero)
{
    int j = -1,correcao = 0;
    for (int i = (n - 1); i >= 0; i--)
    {
        int pot = pow(10,i);
        j++;
        vetor_numero[j] = ((numero - correcao) / pot);
        correcao = correcao + (vetor_numero[j]*pot);
    }
    return;
}

void traduzir_para_morse (int vetor_numeros[],int n)
{
    printf ("\n");
    for (int i = 0; i < n; i++)
    {
        codigo_morse(vetor_numeros[i]);
    }
    printf ("\n");
    return;
}

void codigo_morse(int numero)
{
    switch (numero)
    {
    case (0):
        printf("_ _ _ _ _    ");
        break;
    case(1):
        printf(". _ _ _ _      ");
        break;
    case (2):
        printf(". . _ _ _    ");
        break;
    case (3):
        printf(". . . _ _    ");
        break;
    case (4):
        printf(". . . . _    ");
        break;
    case (5):
        printf(". . . . .    ");
        break;
    case (6):
        printf("_ . . . .    ");
        break;
    case (7):
        printf("_ _ . . .    ");
        break;
    case (8):
        printf("_ _ _ . .    ");
        break;
    case (9):
        printf("_ _ _ _ .    ");
    }
    return;
}
