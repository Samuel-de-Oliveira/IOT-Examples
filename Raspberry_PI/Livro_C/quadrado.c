#include <stdio.h>
#include <conio.h>

int tamanho;

int main( int argc, char *argv[] ) {
	printf("Digite um tamanho: ");
  scanf("%d", &tamanho);

  for (int i = 0; i < tamanho; i++) {
    for (int i = 0; i < tamanho; i++) {
      printf("%c ", 215);
    }
    printf("\n");
  }

	return 0;
}
