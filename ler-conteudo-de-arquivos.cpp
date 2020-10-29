#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{

  int c;
  char conteudoTexto[255];

  FILE *file;

  file = fopen("Texto.txt", "r");

  if (file)
  {
    int cont = 0;

    while ((c = getc(file)) != EOF)
    {

      printf("%c", c);

      conteudoTexto[cont] = c;

      cont++;
    }

    fclose(file);
  }
  int cont;

  for (cont = 0; cont < strlen(conteudoTexto) - 1; cont++)
  {
    printf("%d", conteudoTexto[cont]);
  }

  return 0;
}