#include <stdio.h>
#include <stdlib.h>

void main()
{

  int a = 1, b = 10;

  /* Contando ate 10 (while = enquanto) 
    Primeiro confere a condição e depois repete o bloco*/
  while (a <= 10)
  {

    printf("\n %d", a);

    a++;
  }
  a = 20;

  //Primeiro executa uma veze depois confere a condição
  do
  {

    printf("\n %d", a);

    a++;
  } while (a <= 10);

  // Contagem regressiva
  while (b >= 1)
  {
    printf("\n %d", b);

    b--;
  }
}