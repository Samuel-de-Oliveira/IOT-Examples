#include <stdio.h>
#include <math.h>

// Conversor
float graus_para_radianos( float graus ) {
  return (graus * M_PI) / 180;
}

//// Funções ////
float funcao_afim( float x, float a, float b ) {
  return a * x + b;
}


float funcao_sin( float x ) {
  return sin(
      graus_para_radianos(x)
  );
}

float funcao_cos( float x ) {
  return cos(
      graus_para_radianos(x)
  );
}
/////////////////

// Função principal
int main( int argc, char *argv[] ) {
  int f_a = 2;
  int f_b = 1;
  
  // Função afim
  printf("\033[1;33mFunção do tipo f(x) = %dx + %d\n\033[m", f_a, f_b);
  for ( int f = 1; f <= 10; f++ ) {
    printf("\033[1;34m * %d\033[m - %.2f\n", f, funcao_afim(f, f_a, f_b));
  }
  
  // Funções trigonométricas
  printf("\033[1;33mFunção do tipo f(x) = sin(x) e g(x) = cos(x)\n\033[m");
  for ( int g = 0; g <= 180; g += 15 ) {
    printf("\033[1;34m * sin %dº \033[m- %.2f\n", g, funcao_sin(g));
    printf("\033[1;34m * cos %dº \033[m- %.2f\n", g, funcao_cos(g));
  }

	return 0;
}
