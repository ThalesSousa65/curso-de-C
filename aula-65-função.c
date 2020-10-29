#include <stdio.h>
#include <stdlib.h>

//sem ponteiro
int retornaComMaisDez();

//com ponteiro
void aumentaDez();

int main()
{

  int a = 5;

  printf("\n %d", a);

  //sem poteiro
  a = retornaComMaisDez(a);

  printf("\n %d", a);

  //com ponteiro
  aumentaDez(&a);

  printf("\n %d", a);

  return 0;
}

int retornaComMaisDez(int numero)
{
  return numero + 10;
}

void aumentaDez(int *numero)
{
  *numero = *numero + 10;
}