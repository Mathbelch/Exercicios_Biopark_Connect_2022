#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Vamos criar uma struct que armazene dados de um aluno.
typedef struct Aluno{
    char nome[100];
    int RA;
} Aluno;

void imprimeArquivo(char nomeArq[]); //Fun¸cão que imprime arquivo com o cadastro.
void alteraNome(char nomeArq[], int ra, char nome[]); // Função que atualiza um cadastro.

int main()
{
    char nomeArq[] = "alunos.bin";
    Aluno alunos_turma_01[] = { {"Anderson", 1}, {"Isa", 2}, {"Malu", 3}, {"Beto", 4} };
    FILE *arq = fopen(nomeArq, "w+b"); //vamos abrir o arquivo em modo escrita + leitura.
    if(arq == NULL) //Checagem de abertura do arquivo.
    {
        printf("Erro ao criar arquivo\n"); return 1;
    }
    fwrite(alunos_turma_01, sizeof(Aluno), 4, arq);
    fclose(arq);
    //Após criado o arquivo binário com o cadastro dos alunos da turma 01, podemos altera-lo conforme indicação:
    imprimeArquivo(nomeArq);
    alteraNome(nomeArq, 2, "Isabela");
    imprimeArquivo(nomeArq);
}

void imprimeArquivo(char nomeArq[])
{
    FILE *arq = fopen(nomeArq, "r+b"); //aqui vamos abrir o arquivo no modo leitura e escrita.
    if(arq == NULL) //Checagem
    {
    printf("Arquivo nao existe!\n");
    return;
    }
    printf("\n-----Dados do Arquivo------\n");
    Aluno aux;
    while(fread(&aux, sizeof(Aluno), 1, arq) != 0)
    {
        printf("Nome: %s, RA: %d\n", aux.nome, aux.RA);
    }
    fclose(arq);
    }

void alteraNome(char nomeArq[], int ra, char nome[])
{
    FILE *arq = fopen(nomeArq, "r+b");
    if(arq == NULL)
    {
        printf("Arquivo nao existe!\n");
        return;
    }
    Aluno aux;
    int flag = 0;
    while(fread(&aux, sizeof(Aluno), 1, arq) != 0)
    {
        if(aux.RA == ra)
        {
            flag = 1;
            break;
        }
    }
    //Quando acharmos o valor de RA que queremos alterar, deevemos retornar uma posição para sobrescrever o registro -> fseek.
    if(flag)
    {
        fseek(arq, (-1 * sizeof(Aluno)), SEEK_CUR);
        strcpy(aux.nome, nome); //atualiza o nome
        fwrite(&aux, sizeof(Aluno), 1, arq);
    }
    fclose(arq);
}

