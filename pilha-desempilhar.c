#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void pilha_push(int pilha[TAM], int valor, int *topo);
void imprime_vetor(int vetor[TAM]);
void pilha_pop(int pilha[TAM], int *topo);

int main()
{

  int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int topo = -1, valorRetirado;

  imprime_vetor(pilha);

  pilha_push(pilha, 5, &topo);
  pilha_push(pilha, 7, &topo);

  pilha_pop(pilha, &topo);

  imprime_vetor(pilha);
}

void imprime_vetor(int vetor[TAM])
{

  int cont;

  printf("\n");

  for (cont = 0; cont < TAM; cont++)
  {
    printf("%d - ", cont);
  }
}

void pilha_push(int pilha[TAM], int valor, int *topo)
{

  if (*topo == TAM - 1)
  {
    printf("Pilha cheia");
  }
  else
  {
    *topo = *topo + 1;
    pilha[*topo] = valor;
  }
}

void pilha_pop(int pilha[TAM], int *topo)
{

  if (*topo == -1)
  {
    printf("a pilha ja esta vazia");
  }
  else
  {
    printf("\n Valor retirado %d", pilha[*topo]);
    pilha[*topo] = 0;
    *topo = *topo - 1;
  }
}