#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a = 2;
  char b = 'y';

  //codigo em exemplo com if
  if (a == 1)
  {
    printf("\n opcao escolhida: 1");
  }
  else if (a == 2)
  {
    printf("\n opcao escolhida: 2");
  }
  else if (a == 3)
  {
    printf("\n opcao escolhida: 3");
  }
  else
  {
    printf("\n opcao escolhida invalida");
  }

  // o mesmo codigo de cima, adaptado em switch

  switch (a)
  {
  case 1:
    printf("\n opcao escolhida: 1");
    break;
  case 2:
    printf("\n opcao escolhida: 2");
    break;
  case 3:
    printf("\n opcao escolhida: 3");
    break;
  default:
    printf("\n opcao invalida");
    break;
  }

  //switch com Char
  switch (b)
  {
  case 'x':
    printf("\n A letra eh x");
    break;
  default:
    printf("\n opcao invalida");
    break;
  }
}
