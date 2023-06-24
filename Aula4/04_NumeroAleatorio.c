#include <stdio.h>
#include <stdlib.h>// funções rand() e srand()
#include <time.h> // trabalhar com data e hora

int main(void) {
  int i;
  printf("Gerando 10 valores aleatorios:\n");
  /* gerando valores aleatórios entre zero e 100 */
  for (i = 0; i < 10; i++) {
    printf("%d ", rand() % 100);
  }

  /* gerando valores aleatórios entre zero e 100 usando o time*/
  printf("\n\nGerando 10 valores aleatorios com time():\n");
  srand(time(NULL));
  for (i=0; i < 10; i++) {
    printf("%d ", rand() % 100);
  }

  return 0;
}
