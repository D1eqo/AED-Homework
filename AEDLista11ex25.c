#include <stdio.h>
#include <stdlib.h>

typedef struct lists{
    char nome;
    int tele;
    int anivD;
    int anivM;
    struct lists *prox;
} contato;

int main(){
    int choise;
    char aname;
    FILE *fp=fopen("listadecontatos.bin", "rb+");
    if (fp == NULL) {
        printf("falha ao abrir o arquivo");
    }

    printf("Selecione a opcsao que desejar\n");
    printf("1 (inserir contato) 2 (remover contato) 3 (pesquisar por um contato)\n");
    printf("4 (listar todos os contatos) 5 (listar nomes com a letra _) 6 (imprimir os aniversariantes do mes)\n");

    switch (choise)
    {
        case 1:
        printf("digite o nome do contato");
        scanf("%s", &aname);
        op1(aname);

        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
    }

    fclose(fp);
}

void op1 (char aname){}