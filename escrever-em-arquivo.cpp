#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{

  //cria o objeto do arquivo
  ofstream arquivoDeSaida;

  //abre o arquivo ou cria caso nao exista
  arquivoDeSaida.open("Texto.txt", std::ios_base::app);

  //escreve algo
  arquivoDeSaida << "\n dale";

  //fecha o arquvo
  arquivoDeSaida.close();

  return 0;
}