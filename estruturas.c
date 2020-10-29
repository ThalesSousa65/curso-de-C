#include <stdio.h>
#include <stdlib.h>

struct palavra
{
    int ordem;
    char letra;
    char texto[255];
};

int main() {

    //criar uma palavra
    struct palavra primeiraPalavra;

    //modificando os campos
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'c';
    strcpy(primeiraPalavra.texto,"palavrinha");
    
    //mostrando valores do struct
    printf(" Ordem: %d", primeiraPalavra.ordem);
    printf("\n Primeira letra: %c", primeiraPalavra.letra);
    printf("\n Primeira palavra: %s", primeiraPalavra.texto);

    //fazendo uma lista de strucs
    struct palavra listaDePalavras[3];

    //modificando os campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 2;
    listaDePalavras[2].ordem = 3;
   
    listaDePalavras[0].letra = 'd';
    listaDePalavras[1].letra = 'g';
    listaDePalavras[2].letra = 'j';

    strcpy(listaDePalavras[0].texto,"palavrinha");
    strcpy(listaDePalavras[1].texto,"dale");
    strcpy(listaDePalavras[2].texto,"dele");

    int cont;

    for(cont = 0; cont < 3; cont++) {
        printf("\n Ordem: %d", listaDePalavras[cont].ordem);
        printf("\n Primeira letra: %c", listaDePalavras[cont].letra);
        printf("\n Primeira palavra: %s", listaDePalavras[cont].texto);
    }


    return 0;
}