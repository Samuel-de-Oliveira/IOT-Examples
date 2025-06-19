#include <stdio.h>

int num, r;

int main( int argc, char *argv[] ) {
	printf("Number: ");
  scanf("%d", &num);

  printf("Reversed: ");
  while (num > 0) {
    r = num % 10;
    num /= 10;
    printf("%d", r);
  }

  printf("\n");
	return 0;
}
