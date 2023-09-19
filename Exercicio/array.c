#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no *prox;   
}No;

typedef struct{
    No *dadoLista;
    int tam;
}Lista;

void inserirInicio(Lista *lista, int valor){
    No *novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = lista->dadoLista;
    lista->dadoLista = novo;
    lista->tam++;
}

void imprimir(Lista *lista){
    No *comeca = lista->dadoLista;
    while(comeca != NULL){
        printf("%d, ", comeca->dado);
        comeca = comeca->prox;
    }
    printf("\n\n");
}

int main(){
    Lista lista;
    int opcao, valor;

    lista.dadoLista = NULL;
    lista.tam = 0;

    do{
        printf(" 1 - Inserir no inicio\n 2 - Imprimir\n 3 - tamanho da lista\n 5 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            printf("Informe o valor que deseja adicionar a lista: ");
            scanf("%d", &valor);
            inserirInicio(&lista,valor);
            break;
        case 2:
            imprimir(&lista);
            break;
        case 3:
            printf("Tamanho da lista: %d.\n", lista.tam);
            break;
        case 5:
            printf("Saindo ...\n");
            break;
        default:
            printf("Opcao invalida\n");
        }
    } while (opcao!=5);
}