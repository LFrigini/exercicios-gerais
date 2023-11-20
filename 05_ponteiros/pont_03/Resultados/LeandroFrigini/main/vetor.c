#include "vetor.h"

void LeDadosParaVetor(int * vet, int tam){
    int i;
    for (i = 0; i < tam; i++){
        scanf("%d", vet[i]);
    }
}


void ImprimeDadosDoVetor(int * n, int tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("%d ", n[i]);
    }
}

void TrocaSeAcharMenor(int * vet, int tam, int * paraTrocar){
    int i, menor = 10000, indice;
    for (i = 0; i < tam; i++){
        if(vet[i] < menor){
            menor = vet[i];
            paraTrocar = i;
        }
    }
    int troca = *paraTrocar;

    if(menor < vet[troca]){
        vet[indice] = vet[troca];
        vet[troca] = menor;
    }
    *paraTrocar = menor;
}

void OrdeneCrescente(int * vet, int tam){
    int i, menor;
    for (i = 0; i < tam; i++){
        TrocaSeAcharMenor(vet, tam, &menor);
    }
}