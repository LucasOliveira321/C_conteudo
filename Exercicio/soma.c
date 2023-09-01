#include <stdio.h>

int main(){

    int num[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        int numero = rand();

        int conteudo = numero%100;

        printf("%d \n", conteudo);

        num[i] = conteudo;
    }

    for (int i = 0; i < 5; i++){
        int valor = num[i];
        soma += valor;
        printf("O endereco: %d. \n", &soma);
    }
    printf("A soma do array: %d , o endereco: %d.\n", soma, &soma);
}