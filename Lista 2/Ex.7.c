#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio_7\n\n");
    char sexo;
    float altura,peso_ideal;
    printf ("Indique seu sexo como M (masculino) ou F (feminino):");
    scanf ("%c", &sexo);
    printf ("Indique sua altura em metros: ");
    scanf ("%f", &altura);

    if ((sexo == 'M')||(sexo == 'm')) {

        peso_ideal = ((altura*72.7)-58);
    } else if ((sexo == 'F')||(sexo =='f')){
        peso_ideal = ((altura * 62.1)-44.7);
    } else {
        printf ("\nOpcoes invalidas\n");
        exit (0);
    }

    printf ("\n\nO seu peso ideal eh de %.2fKg, tendo como base sua altura de %.2fm e seu sexo como %c .\n\n",peso_ideal,altura,sexo);


    return 0;
}
