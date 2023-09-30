/*Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/

#include <stdio.h>

int main()
{
  float a = 3, b = 2, c = 3;

  printf("Letra A: \n");
  scanf("%f", &a);
  printf("Letra B: \n");
  scanf("%f", &b);
  printf("Letra C: \n");
  scanf("%f", &c);

  if ((a + b) > c && (b + c) > a && (a + c) > b)
  {
    printf("pode formar triangulo!\n");
    if ((a == b) && (b == c) && (c == a))
      printf("E o triangulo eh equilatero\n");
    else if ((a == b) || (a == c) || (b == c))
      printf("E o triangulo eh isosceles\n");
    else
      printf("E o triangulo eh escaleno\n");
  }
  else
    printf("nao pode formar triangulo\n");

  return 0;
}