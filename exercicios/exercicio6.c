#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
  setlocale(LC_ALL, "");

  float valor1;
  float valor2;
  int escolheu;

  printf("\n Digite o primeiro valor");
  scanf("%f", &valor1);

  printf("\n Digite o segundo valor");
  scanf("%f", &valor2);

  printf("\n Escolha\n 1: Somar \n 2: Subtrair \n 3: Multiplicar \n 4: Dividir\n");
  scanf("%d", &escolheu);

  switch (escolheu)
  {
  case 1:
    printf("\n O resultado da soma entre %.2f e %.2f = %.2f", valor1, valor2,
           (valor1 + valor2));
    break;

  case 2:
    printf("\n O resultado da subtração entre %.2f e %.2f = %.2f", valor1, valor2,
           (valor1 - valor2));
    break;

  case 3:
    printf("\n O resultado da  multipicacao entre %.2f e %.2f = %.2f", valor1, valor2,
           (valor1 * valor2));
    break;

  case 4:
    printf("\n a divisao de %.2f e %.2f = %.2f", valor1, valor2,
           (valor1 / valor2));
    break;

  default:
    printf("\n Escolha uma opcao valida.");
    break;
  }

  system("pause");
}