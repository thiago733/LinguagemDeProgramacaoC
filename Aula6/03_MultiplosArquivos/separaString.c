#include <string.h>
#include "separaString.h"

char *separaString(char *destino, char *tamanho, 
   			   int posicaoInicial, int posicaoFinal) {
  return strncpy(destino, tamanho + posicaoInicial, posicaoFinal);
}
