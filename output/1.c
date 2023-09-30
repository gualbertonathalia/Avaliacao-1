/*Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). */

#include<stdio.h>
#include<math.h>

int main()
{
  int x = 0;

  printf("Insira um numero: ");
  scanf("%d", &x);

  x = ((5*x) + 3) / sqrt((pow(x,2) - 16));

  printf("resultado: %d", x);

  return 0;
}