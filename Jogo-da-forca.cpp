#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void LimpaTela();
string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra);
string retornaPalavraAleatoria();
void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes);
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

string retornaPalavraComMascara(string palavras, int tamanhoDaPalavra)
{

  int cont = 0;

  string palavraComMascara;

  while (cont < tamanhoDaPalavra)
  {
    palavraComMascara += "_";
    cont++;
  }

  return palavraComMascara;
}

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes)
{
  cout << "Palavra: " << palavraComMascara << "(Tamanho :" << tamanhoDaPalavra << ")";
  cout << "\nTentativas restantes: " << tentativasRestantes;
}

void jogarSozinho()
{
  string palavra = retornaPalavraAleatoria();

  int tamanhoDaPalavra = palavra.size();

  string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

  int tentativas = 0, maximoDeTentativas = 10;
  char letra;

  while (maximoDeTentativas - tentativas > 0)
  {
    limpaTela();

    exibeStatus(palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativas);

    cout << "\nDigite uma letra: ";
    cin >> letra;

    tentativas++;
  }
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
