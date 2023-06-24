#include <stdlib.h>
#include <time.h>
#include "geraNumero.h"
int geraNumero(int limite) {
  srand(time(NULL));  
  int numero = 0;
  numero = rand() % limite;
  return numero;
}
