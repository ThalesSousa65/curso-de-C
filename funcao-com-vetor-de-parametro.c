#include <stdio.h>
#include <stdlib.h>

void imprimiVetor();
void modificandoVetor();

int main()
{
  int v[3] = {1, 2, 3};

  imprimiVetor(v, 3);

  modificandoVetor(v, 3);

  imprimiVetor(v, 3);

  return 0;
}

void imprimiVetor(int *vetor, int tamanho)
{

  int i;

  for (i = 0; i < tamanho; i++)
  {
    printf("\n %d", vetor[i]);
  }
}

void modificandoVetor(int *vetor, int tamanho)
{

  int i;

  for (i = 0; i < tamanho; i++)
  {
    vetor[i] = vetor[i] + 1;
  }
}