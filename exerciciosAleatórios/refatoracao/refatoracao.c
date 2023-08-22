#include <stdio.h>

int maximoR(int v[], int n){
    if (n == 1){
        return v[0];
    }
    else{
        int x;
        x = maximoR(v, n-1);
        if (x > v[n-1]){
            return x;
        }
        else{
            return v[n-1];
        }
    }
}