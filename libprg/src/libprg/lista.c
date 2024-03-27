#include "libprg/libprg.h"
#include <stdlib.h>

typedef struct lista{
    int tamanho;
    int capacidade;
    int* valor;
    bool ordenada;
    int inicio;
    int fim;
} lista_t;


lista_t* criarlista(){
    lista_t* lista = malloc(sizeof (lista_t));
    lista->valor = malloc(sizeof (int) * 10);
    lista->tamanho = 0;
    lista->capacidade = 10;

    return lista;
}

int inserir(lista_t* lista, int valor);
int remover(lista_t * lista, int valor);
int buscaLinear(lista_t * lista, int valor);
int buscaBinaria(lista_t * lista, int valor);
int buscaBinariaRecursiva(lista_t* lista, int valor, int inicio, int fim);