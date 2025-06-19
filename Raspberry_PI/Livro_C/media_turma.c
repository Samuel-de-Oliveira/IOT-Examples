#include <stdio.h>

float nota, notas = 0;
int   alunos;

int main( int argc, char *argv[] ) {
	printf("Digite a quantidade de alunos: ");
  scanf("%d", &alunos);
  
  for (int i = 0; i < alunos; i++) {
    printf("Digite a nota do %dº aluno: ", i + 1);
    scanf("%f", &nota);
    notas += nota;
  }
  
  float resultado = notas / alunos;
  printf("Média: %.2f\n", resultado);

	return 0;
}
