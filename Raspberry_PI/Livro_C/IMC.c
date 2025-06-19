#include <stdio.h>
#include <math.h>

float massa, altura; 

int main( int argc, char *argv[] ) {
  printf("Digite sua massa e altura respectivamente: ");
  scanf("%f %f", &massa, &altura);

  float IMC = massa / pow(altura, 2);
  printf("Seu IMC é de: %.2f\n", IMC);

  if (IMC <= 18.49) {
    printf("Magro\n");
  } else if ( IMC >= 18.5 && IMC <= 24.99 ) {
    printf("Peso ideal\n");
  } else {
    printf("Obeso");
  }

	return 0;
}

