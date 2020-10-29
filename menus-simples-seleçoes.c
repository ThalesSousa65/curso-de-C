#include <stdio.h>
#include <stdlib.h>

void main()
{

  int opcao;

  //cofere e valida a opcao
  while (opcao < 1 || opcao > 3)
  {

    //interface do menu
    printf("Escolha uma opcao:");
    printf("\n 1 - opcao");
    printf("\n 2 - opcao");
    printf("\n 3 - opcao\n \n");

    scanf("%d", &opcao);

    //resultado de acordo com a opcao escolhida
    switch (opcao)
    {
    case 1:
      printf("\n Opcao 1 foi escolhida");
      break;

    case 2:
      printf("\n Opcao 2 foi escolhida");
      break;

    case 3:
      printf("\n Opcao 3 foi escolhida");
      break;

    default:
      printf("\n Opcao invalid\n\n");
      break;
    }
  }
}