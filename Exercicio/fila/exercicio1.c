#include<stdio.h>
#include<stdlib.h>

typedef struct cel celula;
struct cel {
int dado;
celula *prox;
};

void insere (int x, celula *p){
celula *nova;
nova = (celula *) malloc (sizeof(celula));
nova->dado = x;
nova->prox = p->prox;
p->prox = nova;
}