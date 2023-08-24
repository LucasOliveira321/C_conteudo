#include <stdio.h>
#define NUMERO_TENTATIVAS 3
#include <time.h>

int main(){
    printf("***********************\n");
    printf("* Jogo de Adivinhacao *\n");
    printf("***********************\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande%100;
    int chute;
    int menor = chute < numeroSecreto;
    int maior = chute > numeroSecreto;

    for(int i = 0; i < NUMERO_TENTATIVAS; i++){
        printf("Tentativa de numero %d/%d\n", i, NUMERO_TENTATIVAS);
        printf("Informe um numero!\n");
        scanf("%d", &chute);

        if (chute < 0){
           printf("Não pode imprimir números negativos!");
           i--;
           continue;
        }
        
        if(chute == numeroSecreto){
            printf("Parabens voce acertou!\n");
            break;
        }
        else if(menor){
                printf("Seu chute foi maior que o numero secreto!\n");
        }
        else if(maior){
            printf("Seu chute foi menor que o numero secreto!\n");
        }
    }
    
    printf("Fim de jogo!");
        
}