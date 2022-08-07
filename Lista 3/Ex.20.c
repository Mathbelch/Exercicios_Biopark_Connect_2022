#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio_20\n\n");
    int qtd_animais,qtd_gatos = 0,qtd_cachorros = 0,qtd_outros = 0;
    char especie[10];
    printf ("Insira a quantidade de animais: ");
    scanf("%d",&qtd_animais);
    printf ("\n**********************************************\n");
    for (int i=0;i<qtd_animais;i++){
        printf("Insira a espécie do %d animal: ",i+1);
        fflush(stdin);
        gets(especie);
        if (strcmp(especie,"gato")==0){
            qtd_gatos++;
        } else if (strcmp(especie,"cachorro")==0){
            qtd_cachorros++;
        } else {
            qtd_outros++;
        }
    }
    printf ("\n**********************************************\n");
    printf ("Total de gatos: %d;\nTotal de cachorros: %d;\nOutros: %d;\n\n",qtd_gatos,qtd_cachorros,qtd_outros);
        return 0;
}
