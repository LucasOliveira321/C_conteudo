// 1. Escreva um programa que declare um inteiro, um real e um char, 
// e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). 
// Modifique os valores de cada variavel usando os ponteiros. Imprima os valores das 
// variaveis antes e apos a modificacao. 
#include <stdio.h>


int main(){
    int inteiro = 5;
    float real = 0.5;
    char txt = "cinco";

    int *i = &inteiro;
    float *r = &real;
    char *t = &txt;

    (*i) = 9;
    (*r) = 1.5;
    (*t) = "dois";

    printf("Valor: %d, Ponteiro: %p, Original: %p. \n", *i, i, &inteiro);    
    printf("Valor: %f, Ponteiro: %p, Original: %p. \n", *r, r, &real);    
    printf("Valor: %d, Ponteiro: %p, Original: %p. \n", *t, t, &txt);    

}