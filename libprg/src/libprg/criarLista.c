#include "libprg/libprg.h"

void criarlista(int capacidade){
    int i, vetor[capacidade];
    for ( i = 0; i<capacidade ; i++) {
        printf("Valor %d =",i);
        scanf("%d",&vetor[i]);
    }
}