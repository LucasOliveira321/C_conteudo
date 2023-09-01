#include <stdio.h>;
#include <string.h>;
#include <time.h>;
#include <stdlib.h>;
#include "forca.h";

char palavraSecreta[20];
char chutes[26];
int chutesDados = 0;

void abertura(){
    printf("******************\n");
    printf("***** A FORCA ****\n");
    printf("******************\n\n");
}

void chuta(){
        char chute;
        scanf(" %c", &chute);
        chutes[chutesDados] = chute;
        chutesDados++;
}

int chutou(char letra){
    int achou = 0;

    for (int j = 0; j < chutesDados; j++){
        if (chutes[j] == letra){
            achou = 1;
            break;
        }
    }
    return achou;
}

void desenhaForca(){

    for (int i = 0; i < strlen(palavraSecreta); i++){
            
        int achou = chutou(chutes);

            if (chutou(palavraSecreta[i])){
                printf("%c", palavraSecreta[i]);
            }else{
                printf("_ ");
            }
        } 
        printf("\n");
}

void escolhePalavra(){
    FILE* f;

    f = fopen("texto.txt", "r");
    if(f == 0) {
        printf("Banco de dados de palavras não disponível\n\n");
        exit(1);
    }

    int quantidade;
    fscanf(f,"%d", &quantidade);

    srand(time(0));
    int randomico = rand()%quantidade;

    for (int i = 0; i <= randomico; i++){
        fscanf(f,"%s", palavraSecreta);
    }
    
    fclose(f);
}

int enforcou(){
    int erros =0;

    for(int i = 0; i < chutesDados; i++){
        int existe = 0;
        for(int j = 0; j < strlen(palavraSecreta); j++){
            if(chutes[i] == palavraSecreta[j]){
                existe = 1;
                break;
            }
        }

        if(!existe){
            erros++;
        }
    }

    return erros >=5;
}

int acertou(){
    for (int i = 0; i < strlen(palavraSecreta); i++){
        if (!chutou(palavraSecreta[i])){
            return 0;
        }
    }
    return 1;
}

int main(){

    escolhePalavra();
    abertura();

    do{
        
        desenhaForca();
        chuta();

    }while (!acertou() && !enforcou());
} 