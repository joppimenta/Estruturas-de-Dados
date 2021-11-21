#include <stdio.h>
#include <stdlib.h>

typedef struct no_s{
  int chave;
  struct no_s *prox;

}no;

typedef struct lista_s{
  no *prim;
}lista;

lista *criarLista(){
  lista *L;

  L = malloc(sizeof(lista));

  L->prim = NULL;

  return L;
}

void apagarLista(lista *L){
  no *x;

  while(L->prim != NULL){
    x = L->prim;
    L->prim = x->prox;
    free(x);
  }
}

void imprimirLista(lista *L){
  no *x;

  x = L->prim;

  int i = 1;

  while(x != NULL){
    printf("L(%d) = %d", i, x->chave);
    i++;
    x = x->prox;
  }
}

void incluirLista(lista *L, int k){
  no *x;

  x = malloc(sizeof(no));

  x->chave = k;

  x->prox = L->prim;

  L->prim = x;
}

void removerPrimeiroDaLista(lista *L){
  no *x;

  x = L->prim;
  L->prim = L->prim->prox;

  free(x);
}

int main(){


}