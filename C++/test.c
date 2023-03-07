#include <stdio.h>

int r[100];

int factorisation(int n);
int main(){
    int m;
    scanf("%d", &m);
    printf("%d\n", factorisation(m));
}

int factorisation(int n){
    r[0] = 1;
    for(int i=1;i<=n;i++){
        r[i] = i * r[i-1];
    }
    return r[n];
}