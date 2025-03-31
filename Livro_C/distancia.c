#include <stdio.h>
#include <math.h>

float x_1, x_2, y_1, y_2;

int main( int argc, char *argv[] ) {
  // Cria cordenadas
	printf("Digite as cordenadas do ponto A: ");
  scanf("%f %f", &x_1, &y_1);
  printf("Agora do ponto B: ");
  scanf("%f %f", &x_2, &y_2);

  // Mostra cordenadas
  printf("Ponto A: (%.2f, %.2f)\n", x_1, y_1);
  printf("Ponto B: (%.2f, %.2f)\n", x_2, y_2);

  // Calcula a distancia
  float distancia = sqrt(
    pow(y_2 - y_1, 2) + pow(x_1 - x_2, 2)
  );

  // Mostra a distancia
  printf("A distancia vale: %.2f\n", distancia);
	return 0;
}
