#include <stdio.h>
#include <stdbool.h>

int num, resultado;

int main( int argc, char *argv[] ) {
  while (true) {
	  printf("Digite um número: ");
    scanf("%d", &num);
    if ( num > 0 && num < 10 ) {
      break;
    } else {
      printf("Digite um número positivo menor que 10...\n");
    }
  }
  for (int i = 0; i <= 10; i++) {
    resultado = num * i;
    printf("\n%d x %d = %d", num, i, resultado);
  }
  printf("\n\n");

	return 0;
}
