#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{

  ifstream input("Texto.txt");

  string textoLido;

  for (string line; getline(input, line);)
  {
    textoLido += line;
  }

  cout << textoLido;

  return 0;
}