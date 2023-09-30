/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */

#include <stdio.h>

int main()
{
  double chico = 1.50, ze = 1.10;
  int anos = 0;
  for (chico; chico > ze; chico += 0.02)
  {
    ze += 0.03;
    anos++;
    printf("chico: %f, ze: %f -> ANO(%d)\n", chico, ze, anos);
  }

  printf("a quantidade de anos eh: %d\n", anos);

  return 0;
}