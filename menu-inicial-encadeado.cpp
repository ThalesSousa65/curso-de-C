#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct pessoa
{
    string nome;
    int rg;
    struct pessoa *proximo;
};

void limpaTela();

int retornaTamanho(pessoa *ponteiroEncadeado);

void impremeEncadeada(pessoa *ponteiroEncadeado);
void adcComecoEncadeado(pessoa *&ponteiroEncadeado, string nome, int rg);
void adcFimEncadeado(pessoa *&ponteiroEncadeado, string nome, int rg);
void adcPosicaoEncadeado(pessoa *&ponteiroEncadeado, string nome, int rg, int posicao);
void adcPosicaoEncadeado(pessoa *&ponteiroEncadeado, string nome, int rg, int posicao);
void removeInicioEncadeado(pessoa *&ponteiroEncadeado);
void removeFimEncadeado(pessoa *&ponteiroEncadeado);
void removePosicaoEncadeado(pessoa *&ponteiroEncadeado, int posicao);

int main()
{

    int funcaoDesejada = 1;

    pessoa *ponteiroEncadeado = new pessoa;
    ponteiroEncadeado->nome = "";
    ponteiroEncadeado->rg = 0;
    ponteiroEncadeado->proximo = NULL;

    while (funcaoDesejada < 9 && funcaoDesejada > 0)
    {
        cout << " Operacoes \n \n";
        cout << " 1 - insercao de um node no inicio da lista\n";
        cout << " 2 - insercao de um node no fim da lista \n";
        cout << " 3 - insercao de um node na posicao N \n";
        cout << " 4 - Retirar um node do inicio da lista \n";
        cout << " 5 - Retirar um node do fim da lista \n";
        cout << " 6 - Retirar um node na posicao N \n";
        cout << " 7 - Procurar um node com o campo RG \n";
        cout << " 8 - Imprimir a lista. \n";
        cout << " 9 - Sair do sistema. \n";
        cout << "\n Escolha um numero e pressione ENTER: \n";
        cout << "\n\n Tamanho atual:" << retornaTamanho(ponteiroEncadeado) << "\n \n";

        if (retornaTamanho(ponteiroEncadeado) == 0)
        {
            cout << "\n Lista vazia";
        }
        else
        {
            impremeEncadeada(ponteiroEncadeado);
        }

        cin >> funcaoDesejada;

        limpaTela();

        string nome;
        int rg, posicao;

        switch (funcaoDesejada)
        {

        case 1:
            cout << "\n \nFuncao escolhida: 1 - insercao de um node no inicio da lista.\n\n";

            cout << "Digite o nome: ";
            cin >> nome;

            cout << "Digite o RG: ";
            cin >> rg;

            adcComecoEncadeado(ponteiroEncadeado, nome, rg);

            break;

        case 2:
            cout << "\n\nFuncao escolhida: 2 - insercao de um node no fim da lista \n\n";

            cout << "Digite o nome: ";
            cin >> nome;

            cout << "Digite o RG: ";
            cin >> rg;

            if (retornaTamanho(ponteiroEncadeado) == 0)
            {
                adcComecoEncadeado(ponteiroEncadeado, nome, rg);
            }
            else
            {

                adcFimEncadeado(ponteiroEncadeado, nome, rg);
            }

            break;

        case 3:
            cout << "\n \nFuncao escolhida:  3 - insercao de um node na posicao N\n\n";

            cout << "Digite o posicao: ";
            cin >> posicao;

            cout << "Digite o nome: ";
            cin >> nome;

            cout << "Digite o RG: ";
            cin >> rg;

            if (posicao == 0)
            {

                adcComecoEncadeado(ponteiroEncadeado, nome, rg);
            }
            else if (posicao == retornaTamanho(ponteiroEncadeado) - 1)
            {

                adcFimEncadeado(ponteiroEncadeado, nome, rg);
            }
            else
            {

                adcPosicaoEncadeado(ponteiroEncadeado, nome, rg, posicao);
            }

            break;

        case 4:
            cout << "\n\nFuncao escolhida: 4 - Retirar um node do inicio da lista \n\n";

            removeInicioEncadeado(ponteiroEncadeado);

            break;

        case 5:
            cout << "\n\nFuncao escolhida:  5 - Retirar um node do fim da lista \n\n";

            if (retornaTamanho(ponteiroEncadeado) == 1)
            {
                removeInicioEncadeado(ponteiroEncadeado);
            }
            else
            {
                removeFimEncadeado(ponteiroEncadeado);
            }

            break;

        case 6:
            cout << "\n\nFuncao escolhida: 6 - Retirar um node na posicao N\n\n";

            cout << "Digite o posicao: ";
            cin >> posicao;

            if (posicao == 0)
            {

                removeInicioEncadeado(ponteiroEncadeado);
            }
            else if (posicao == retornaTamanho(ponteiroEncadeado) - 1)
            {
                removeFimEncadeado(ponteiroEncadeado);
            }
            else
            {
                removePosicaoEncadeado(ponteiroEncadeado, posicao);
            }
        }
    }
}

void limpaTela()
{
    system("CLS");
}

int retornaTamanho(pessoa *ponteiroEncadeado)
{
    if (ponteiroEncadeado->nome == "")
    {
        return 0;
    }

    int tamanho = 0;

    pessoa *p = ponteiroEncadeado;

    while (p != NULL)
    {

        p = p->proximo;

        tamanho++;
    }

    return tamanho;
}

void impremeEncadeada(pessoa *ponteiroEncadeado)
{

    pessoa *p = ponteiroEncadeado;

    while (p != NULL)
    {

        cout << p->nome << "," << p->rg << "\n";

        p = p->proximo;
    }
}

void adcComecoEncadeado(pessoa *&ponteiroEncadeado, string nome, int rg)
{

    pessoa *novoValor = new pessoa;

    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = ponteiroEncadeado;

    if (ponteiroEncadeado->nome == "")
    {
        novoValor->proximo = NULL;
    }
    else
    {
        novoValor->proximo = ponteiroEncadeado;
    }

    ponteiroEncadeado = novoValor;
}

void adcFimEncadeado(pessoa *&ponteiroEncadeado, string nome, int rg)
{
    pessoa *novoValor = new pessoa;

    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeado;

    while (p != NULL)
    {
        if (p->proximo == NULL)
        {
            p->proximo = novoValor;
            return;
        }

        p = p->proximo;
    }
}

void adcPosicaoEncadeado(pessoa *&ponteiroEncadeado, string nome, int rg, int posicao)
{
    pessoa *novoValor = new pessoa;

    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeado;

    int cont = 0;
    while (cont <= posicao)
    {

        if (cont == posicao - 1)
        {
            pessoa *aux = new pessoa;

            aux->proximo = p->proximo;

            p->proximo = novoValor;

            novoValor->proximo = aux->proximo;

            free(aux);
        }

        p = p->proximo;

        cont++;
    }
}

void removeInicioEncadeado(pessoa *&ponteiroEncadeado)
{

    if (ponteiroEncadeado->proximo == NULL)
    {
        pessoa *novoValor = new pessoa;

        novoValor->nome = "";
        novoValor->rg = 0;
        novoValor->proximo = NULL;

        ponteiroEncadeado = novoValor;
    }
    else
    {

        ponteiroEncadeado = ponteiroEncadeado->proximo;
    }
}

void removeFimEncadeado(pessoa *&ponteiroEncadeado)
{
    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;

    p = ponteiroEncadeado;

    while (p->proximo != NULL)
    {

        aux = p;
        p = p->proximo;
    }

    aux->proximo = NULL;
}

void removePosicaoEncadeado(pessoa *&ponteiroEncadeado, int posicao)
{

    pessoa *p = ponteiroEncadeado;

    int cont = 0;
    while (cont <= posicao)
    {

        if (cont == posicao - 1)
        {

            pessoa *aux = new pessoa;

            aux = p->proximo;
            p->proximo = aux->proximo;

            free(aux);
        }

        p = p->proximo;

        cont++;
    }
}