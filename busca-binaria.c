#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]);
int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);

int main()
{

  int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 91, 94, 142};
  int valorProcurado;
  int posicao, posicaoEncontrada;
  int cont;

  imprime_vetor(vetor);

  printf("\n Qual numero deseja encontrar ");
  scanf("%d", &valorProcurado);

  if (busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1)
  {
    printf("\n o valor foi encontrado, na posicao %d", posicaoEncontrada);
  }
  else
  {
    printf("valor nao encontrado");
  }

  return 0;
}
void imprime_vetor(int vetor[TAM])
{

  int cont;

  for (cont = 0; cont < TAM; cont++)
  {
    printf("%d - ", vetor[cont]);
  }
}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
  int esquerda = 0;
  int direita = TAM - 1;
  int meio;

  while (esquerda <= direita)
  {
  };

  meio = (esquerda + direita) / 2;

  if (valorProcurado == vetor[meio])
  {
    *posicaoEncontrada = meio;
    return 1;
  }

  if (vetor[meio] < valorProcurado)
  {
    esquerda = meio + 1;
  }
  else
  {
    direita = meio - 1;
  }

  return -1;
}