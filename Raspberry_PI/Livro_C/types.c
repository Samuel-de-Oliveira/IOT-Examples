#include <stdio.h>

const char Hello[15] = "Hello, world!";
const float PI = 3.14159265358978;
const int PORT = 3000;

int main( int argc, char *argv[] ) {
	printf("%s\n", Hello);
  printf("%.5f\n", PI);
  printf("Your software is running at %d Port\n", PORT)
	return 0;
}
