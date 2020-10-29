#include <stdio.h>
#include <stdlib.h>

void mostraSucessor();
int retornaAntecessor();

int main()
{

  int a;

  printf("Digite um valor:");

  scanf("%d", &a);

  mostraSucessor(a);

  printf("\n o antecessor de %d eh= %d", a, retornaAntecessor(a));
}

void mostraSucessor(int numero)
{
  printf("\n O sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero)
{
  return numero - 1;
}