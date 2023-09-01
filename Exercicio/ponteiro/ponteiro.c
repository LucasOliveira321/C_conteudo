#include <stdio.h>

void calcula(int* c){
    printf("calcula %d - %p\n", (*c), c);
    //(*c)++;
    printf("calcula %d - %p\n", ++(*c), c);
}

int main(){
    int c = 10;

    printf("main %d - %p\n", c, &c);
    calcula(&c);
    printf("main %d - %p\n", c, &c);
}