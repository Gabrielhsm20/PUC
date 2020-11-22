#ifndef FILA2_H_INCLUDED
#define FILA2_H_INCLUDED
//======================================
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pessoa.h"
#define MAX 5
//====================================
typedef struct Fila{
  Pessoa dados[MAX];
  int inicio, fim;  
  int tam;
}Fila;
//======================================
void create_fila(Fila *f){
  f->inicio = 0;
  f->fim = 0;
  f->tam = 0;
}
//======================================
// Queue
bool enqueue(Fila *f, Pessoa dado){

  if((f->fim+1)%MAX == f->inicio)
    return false;

  f->fim = (f->fim+1)%MAX;
  f->dados[f->fim] = dado;
  f->tam++;

  return true;  
}
//======================================
void print_fila(Fila *f){

  int pos = (f->inicio+1)%MAX;

  for(int i = 0; i < f->tam; i++){
    print_pessoa(f->dados[pos]);
    pos = (pos+1)%MAX;
  }

}
//======================================
Pessoa dequeue(Fila *f){

  if(f->tam == 0){
    return invalida_pessoa();
  }

  f->inicio = (f->inicio+1)%MAX;
  f->tam--;
  return f->dados[f->inicio];
}



//======================================
#endif // FILA_H_INCLUDED
