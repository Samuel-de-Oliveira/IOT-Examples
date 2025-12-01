#include <stdio.h>
#include <math.h>

float funcao_afim( float x, float a, float b ) {
  return a * x + b;
}


float deriva_afim( float x, float a, float b ) {
  return a;
}

int main( int argc, char *argv[] ) {
  int a = 2;
  int b = 1;
  printf("Função do tipo f(x) = %dx + %d\n", a, b);
  for ( int i = 1; i <= 10; i++ ) {
    printf("%d - %.2f\n", i, funcao_afim(i, a, b));
  }

	return 0;
}
