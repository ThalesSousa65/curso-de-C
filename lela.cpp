#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void LimpaTela();
string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra);
string retornaPalavraAleatoria();
void jogarSozinho();
void menuInicial();

int main()
{
  srand((unsigned)time(NULL));
  menuInicial();

  return 0;
}

void limpaTela()
{
  system("CLS");
}

string retornaPalavraAleatoria()
{

  string palavras[3] = {"Abacaxi", "Morango", "Manga"};

  int indiceAleatorio = rand() % 3;

  return palavras[indiceAleatorio];
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra)
{

  int cont = 0;
  string palavraComMascara;

  while (cont < tamanhoPalavra)
  {
    palavraComMascara += "_";
    cont++;
  }

  return palavraComMascara;
}

void jogarSozinho()
{
  string palavra = retornaPalavraAleatoria();

  int tamanhoPalavra = palavra.size();

  string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoPalavra);

  cout << "A palavra secreta eh " << palavra << "(tamanho: " << tamanhoPalavra << ")";
  cout << "\nMascara: " << palavraComMascara;
}

void menuInicial()
{
  int opcao = 0;
  while (opcao < 1 || opcao > 3)
  {
    cout << "\n Bem vindo ao jogo";
    cout << "\n 1 - Jogar";
    cout << "\n 2 - Sobre";
    cout << "\n 3 - Sair";
    cout << "\n Escolha uuma opcao e tecle Enter:\n";
    cin >> opcao;

    switch (opcao)
    {
    case 1:
      jogarSozinho();

      break;

    case 2:

      break;

    case 3:

      break;
    }
  }
}
