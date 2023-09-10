#include<stdio.h>

typedef struct cel celula;
struct cel {
    int dado;
    celula *prox;
};

int main(){

    celula c;
    celula *p;

    printf("%d \n", c.dado);
    printf("%p \n", c.prox);

}