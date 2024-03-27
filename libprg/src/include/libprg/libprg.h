#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double value;
    int error;
} result_t;


typedef enum { SUM, SUB } operation_t;

result_t sub(double a, double b);
result_t sum(double a, double b);
result_t compute(double a, double b, operation_t op);

typedef struct lista lista_t;

lista_t* criarlista();
int inserir(lista_t* lista, int valor);
int remover(lista_t * lista, int valor);
int buscaLinear(lista_t * lista, int valor);
int buscaBinaria(lista_t * lista, int valor);
int buscaBinariaRecursiva(lista_t* lista, int valor, int inicio, int fim);

fila_t* criarFila(int capacidade);
void enfileirar(fila_t* fila, int elemento);
int desenfileirar(fila_t* fila);
int getInicio(fila_t* fila);
int getIinal(fila_t* fila);
int getTamanho(fila_t* fila);
bool isVazia(fila_t* fila);
bool isCheia(fila_t* fila);



#endif
