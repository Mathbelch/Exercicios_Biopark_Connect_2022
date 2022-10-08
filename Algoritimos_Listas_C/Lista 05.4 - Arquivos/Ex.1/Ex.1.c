#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arq_entrada, *arq_saida; //Criando ponteiros para os arquivos.
    char nome_arq_entrada[100], nome_arq_saida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arq_entrada);
    arq_entrada = fopen(nome_arq_entrada, "r"); //Vamos abrir o arquivo de entrada no modo leitura.

    if(arq_entrada == NULL) //Vamos checar se o arquivo foi aberto corretamente.
    {
        printf("Arquivo de entrada inexistente!\n");
        return 1;
    }

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nome_arq_saida);
    arq_saida = fopen(nome_arq_saida, "w"); //Vamos abrir o arquivo de entrada no modo leitura.

    if(arq_saida == NULL) //Vamos checar se o arquivo foi aberto corretamente.
    {
        printf("Arquivo de saida inexistente!\n");
        return 1;
    }

    //Vamos determinar o tamanho do arquivo de entrada:
    char aux;
    int size = 0;
    while(fscanf(arq_entrada, "%c", &aux) != EOF) //até chegar ao final do arquivo (EOF)
    size++;
    //Alocamos string com espaco suficiente para o arquivo (malloc) no ponteiro para vetor texto (+1 p/ o \0).
    char *texto = malloc((size+1)*sizeof(char));
    //Carregamos arquivo para a memória desde seu ínicio com rewind.
    rewind(arq_entrada);
    int i=0; //variável para acessar índice do ponteiro para vetor texto.
    fprintf(arq_saida, "%s", "Texto Original: ");
    while(fscanf(arq_entrada, "%c", &aux) != EOF)
    {
        texto[i] = aux; //texto na posição recebe recebe o char do aux conforme avançamos no arquivo.
        fprintf(arq_saida, "%c", texto[i]); //Vamos printar o texto original no arquivo de saida.
        i++;
    }
    texto[i] = '\0'; //Loop até o final do arquivo (fscanf retorna Null): vamos setar o final do vetor de char em \0.

    fprintf(arq_saida,"%c",'\n'); //Vamos pular linhas no arquivo de saida.
    fprintf(arq_saida, "%s", "Texto Modificado: ");

    printf("%s", texto); //Vamos printar o texto original do arquivo (está agora no conteúdo do ponteiro texto, como string.

    //Vamos escrever o texto modificado no arquivo de saida:
    i = 0; //vamos setar nosso índice do vetor texto.
    while(texto[i] != '\0') //Só vamos mecher até chegar ao final do vetor de char.
    {
        if(texto[i] == 'a')
        texto[i] = 'A'; //modifica
        fprintf(arq_saida, "%c", texto[i]); //printa o char.
        i++;
    }
    printf("\n%s", texto); //Vamos exibir o texto modificado.
    free(texto); //vamos liberar a memória do ponteiro texto.
    fclose(arq_entrada); //vamos fechar os arquivos.
    fclose(arq_saida);
    return 0;
}
