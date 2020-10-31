#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void LimpaTela();
void jogarSozinho();
void menuInicial();

int main()
{
  srand((unsigned)time(NULL));
  menuInicial();

  return 0;
}

void limpaTela()
{
  system("CLS");
}

void jogarSozinho()
{

  char palavras[3] = {"Abacaxi", "Morango", "Manga"};

  int indiceAleatorio = rand();

  printf("%d", indiceAleatorio);
}

void menuInicial()
{
  int opcao = 0;
  while (opcao < 1 || opcao > 3)
  {
    printf("\n Bem vindo ao jogo");
    printf("\n Jogar");
    printf("\n Sobre");
    printf("\n Sair");
    printf("\n Escolha uuma opcao e tecle Enter:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      jogarSozinho();

      break;

    case 2:

      break;

    case 3:

      break;
    }
  }
}
