#include "libprg/libprg.h"
#include <stdlib.h>

typedef struct lista{
    int tamanho;
    int capacidade;
    int* valores;
    bool ordenada;
} lista_t;

lista_t* criarlista(bool ordenada){
    lista_t* lista = malloc(sizeof (lista_t));
    lista->valores = malloc(sizeof (int) * 10);
    lista->tamanho = 0;
    lista->capacidade = 10;
    lista->ordenada = ordenada;

    printf("Lista criada\n");
    return lista;
}

int inserir(lista_t* lista, int valor){
    if (lista->ordenada){
        for (int i = 0; i < lista->tamanho; ++i) {
            if (valor > lista->valores[i]){
                lista->valores[i] = valor;
            }
        }
    } else{
        lista->valores[lista->tamanho] = valor;
    }
    lista->tamanho++;
};
//int remover(lista_t * lista, int valores);
//int buscaLinear(lista_t * lista, int valores);
//int buscaBinaria(lista_t * lista, int valores);
//int buscaBinariaRecursiva(lista_t* lista, int valores, int inicio, int fim);