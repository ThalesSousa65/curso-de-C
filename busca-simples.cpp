#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]);
int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);

int main()
{

  int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 91, 94, 103};
  int valorProcurado;
  int posicao, posicaoEncontrada;
  int cont;

  imprime_vetor(vetor);

  printf("\n Qual numero deseja encontrar ");
  scanf("%d", &valorProcurado);

  if (busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1)
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

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{

  int cont;

  bool valorFoiEncontrado;

  for (cont = 0; cont < TAM; cont++)
  {
    if (vetor[cont] == valorProcurado)
    {
      valorFoiEncontrado = true;
      *posicaoEncontrada = cont;
    }
  }

  if (valorFoiEncontrado)
  {
    return 1;
  }
  else
  {
    return -1;
  }
}