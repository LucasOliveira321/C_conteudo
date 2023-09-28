// Implemente um programa em C que utiliza a estrutura
// apresentada para implementar uma lista. O programa
// deve mostrar ao usuario duas opcoes. Se o usuario 
// escolher 1, a lista deve ser impressa; se escolher 2, ele
// deve entrar com o valor do conteudo do novo elemento da lista.

#include <stdlib.h>
#include <stdio.h>

typedef struct{
   int dado;
   struct Lista *prox;  
}Lista;


void adicionaNumero(Lista *lista, int valor){
    Lista *novaLista;
    novaLista = malloc(sizeof(Lista));
    novaLista->dado = valor;
    novaLista->prox = lista;
}

void imprimir(Lista *lst){
    Lista *p;
    for (p = lst; p != NULL; p = p->prox){
        printf("%d\n", p->dado);
    }    
}



int main(){
    Lista lista;
    int valor1 = 5;
    int valor2 = 10;

    adicionaNumero(&lista, valor1);
    adicionaNumero(&lista, valor2);
    imprimir(&lista);

   // int a = 5;

   // int *b;
   // b = a;

   // int **c;
   // c = b;

   // printf("%d\n", c);
}