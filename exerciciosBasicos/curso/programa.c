#include <stdio.h>

int main(){
    printf("***********************\n");
    printf("* Jogo de Adivinhacao *\n");
    printf("***********************\n");

    int numeroSecreto = 30;
    int chute;

    //printf("O número secreto e %d !", numeroSecreto); assim que se declara uma variavel int no meio do texto

    printf("Informe um número!\n");
    scanf("%d", &chute);
    if(chute == numeroSecreto){
        printf("Parabens voce acertou!\n");
    }else{
        if (chute > numeroSecreto) {
            printf("Seu chute foi maior que o numero secreto!\n");
        }else{
            printf("Seu chute foi menor que o numero secreto!\n");
        }
    }
        
}