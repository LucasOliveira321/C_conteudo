#include <stdio.h>

int main(){
    printf("Informe a tabuada que deseja imprimir!\n");

    int valor;
    int resultado = 0;
    scanf("%d", &valor);

    for(int i = 0; i < 10; i++){
        resultado = valor * (i+1);
        printf(" %d x %d = %d \n",valor,i+1, resultado);
    }
}