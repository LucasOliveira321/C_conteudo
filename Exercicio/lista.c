#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int dado;
    struct Lista *prox;
}Lista;

void adiciona(Lista *lista, int valor){
    Lista *novo;
    novo = malloc(sizeof(Lista));
    novo->dado = valor;
    novo->prox = lista;
}

void imprimir(Lista *lista){
    Lista *p;
    for (p = lista; p != NULL; p = p->prox){
        printf("%d\n", p->dado);
    }
}

int main(){
    Lista lista;

    int valor1 = 5;
    int valor2 = 10;

    adiciona(&lista, valor1);
    adiciona(&lista, valor2);

    imprimir(&lista);

}