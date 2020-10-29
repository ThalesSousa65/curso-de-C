#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

  setlocale(LC_ALL, "");

  int a = 10;

  while (a <= 20)
  {
    printf("%d \n", a);

    a = a + 2;
  }

  a = 10;

  do
  {
    printf("%d \n", a);

    a = a + 2;
  } while (a <= 20);

  for (a = 10; a <= 20; a++)
  {
    if (a % 2 == 0)
    {
      printf("%d e par \n", a);
    }
    else
    {
      printf("%d e impar \n", a);
    }
  }
}