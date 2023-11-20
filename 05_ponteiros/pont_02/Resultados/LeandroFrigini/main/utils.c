#include "utils.h"

void LeIntervalo(int * m, int * n){
    scanf("%d %d", m, n);
}

int EhPrimo(int n){
    if(n == 2) return 1;
    if(n <= 1 || n%2 == 0) return 0;

    int i, divisores=0;

    for (i = 3; i <= n/2; i++) {
        if (n % i == 0) {
        divisores++;
        break;
        }
    }

    if (divisores == 0) return 1;
    return 0;
}

void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior){
    int i;
    *(menor) = n;
    *(maior) = m;
    for (i = m; i <= n; i++){
        if(EhPrimo(i)){
            if(i < *(menor)){
                *(menor) = i;
            }
            if (i > *(maior)){
                *(maior) = i;
            }
        }
    }
}