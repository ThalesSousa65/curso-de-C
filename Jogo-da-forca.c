#include <stdio.h>
#include <stdlib.h>

void LimpaTela();
void menuInicial();

int main()
{
  menuInicial();

  return 0;
}

void limpaTela()
{
  system("CLS");
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

      break;

    case 2:

      break;

    case 3:

      break;
    }
  }
}