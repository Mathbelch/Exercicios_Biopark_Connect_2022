#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar_vogais (char texto[],int TAM);
int contar_conssoantes (char texto[],int TAM);


int main()
{
    printf("Exercicios_vogais_e_consoantes_com_funcoes: \n");
    int TAM=200,qtd_vogais=0,qtd_conssoantes=0;
    char texto[TAM];
    printf("Insira seu texto: ");
    scanf("%[^\n]s*c",texto);
    printf ("\nTexto: %s\n",texto);
    qtd_vogais = contar_vogais(texto,TAM);
    qtd_conssoantes = contar_conssoantes(texto,TAM);
    printf("\nQtd vogais: %d", qtd_vogais);
    printf("\nQtd consoantes: %d", qtd_conssoantes);

    return 0;
}

int contar_vogais (char texto[],int TAM){
    int indice=0,qtd_vogais=0;
    while (indice<TAM && indice < strlen(texto) ){
        if (((texto[indice]>=65) && (texto[indice]<=90))||
            ((texto[indice]>=97) && (texto[indice]<=122)))
            {
                if ((texto[indice]==97)||(texto[indice]==101)||
                    (texto[indice]==105)||(texto[indice]==111)||
                    (texto[indice]==117)||(texto[indice]==65)||
                    (texto[indice]==69)||(texto[indice]==73)||
                    (texto[indice]==79)||(texto[indice]==85))
                    {
                    qtd_vogais++;
                }
            }
        indice++;
    }
    return qtd_vogais;
}

int contar_conssoantes (char texto[],int TAM){
    int indice=0,qtd_conssoantes=0;
    while (indice<TAM && indice < strlen(texto) ){
        if (((texto[indice]>=65) && (texto[indice]<=90))||
            ((texto[indice]>=97) && (texto[indice]<=122)))
            {
                if ((texto[indice]==97)||(texto[indice]==101)||
                    (texto[indice]==105)||(texto[indice]==111)||
                    (texto[indice]==117)||(texto[indice]==65)||
                    (texto[indice]==69)||(texto[indice]==73)||
                    (texto[indice]==79)||(texto[indice]==85))
                    {
                } else {
                    qtd_conssoantes++;
                }
            }
        indice++;
    }
    return qtd_conssoantes;
}
