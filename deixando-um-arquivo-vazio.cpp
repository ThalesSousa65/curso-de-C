#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{

  ofstream meuArquivo;

  meuArquivo.open("Texto.txt");

  meuArquivo << "";

  meuArquivo.close();

  return 0;
}