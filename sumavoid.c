#include <stdio.h>

#define CONSTANTE 4
//En mac el metodo main debe retornor(int) algo, en linux el metodo main puede ser void.
int main() {
  int numero1 = 3;
  int numero2 = 5;

  int suma;

  suma = numero1 + numero2;

  printf("El resultado es %d\n", suma );

  return 0;
}
