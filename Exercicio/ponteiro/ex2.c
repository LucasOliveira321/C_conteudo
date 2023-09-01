// 2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
// exiba o maior endereco.
#include <stdio.h>

int main(){
    int dois = 2;
    int tres = 3;

    int *d = &dois;
    int *t = &tres;

    if (d < t){
        printf("Maior endereco: %p, Menor endereco: %p", t, d);
    }else{
        printf("Maior endereco: %p, Menor endereco: %p", d, t);
    }
}