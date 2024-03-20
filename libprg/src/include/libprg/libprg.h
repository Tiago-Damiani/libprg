#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double value;
    int error;
} result_t;

typedef struct {
    int valor;
    bool ordenada;
    int inicio;
    int fim;
} lista;

typedef enum { SUM, SUB } operation_t;

result_t sub(double a, double b);
result_t sum(double a, double b);
result_t compute(double a, double b, operation_t op);

void criarlista(bool ordenada);
int inserir(lista* lista, int valor);
int remover(lista* lista, int valor);
int buscaLinear(lista* lista, int valor);
int buscaBinaria(lista* lista, int valor);
int buscaBinariaRecursiva(lista* lista, int valor, int inicio, int fim);




#endif
