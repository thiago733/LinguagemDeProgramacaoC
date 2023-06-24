#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "geraNumero.h"
#include "separaString.h"
#include "geraNovoNumero.h"

void gerarNovoNumero (char *valorRecebido, int tamanhoVetor, int tipo) {
  char *novoTexto;
  novoTexto = malloc(tamanhoVetor * sizeof(char*));
  strcpy(novoTexto, valorRecebido);
  char letra[11] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 
                    'I', 'J','\0' }; 
  char parte1[6];   
  char parte2[3];
  int numero = 0;

  numero = geraNumero(10);
  novoTexto[0] = letra[numero];

  char *tmp;
  tmp = novoTexto;
  char *tamanho = malloc(strlen(tmp)); 

  if (tipo == 1) {
    numero = geraNumero(10);
    novoTexto[3] = letra[numero];
    numero = geraNumero(10);
    novoTexto[10] = letra[numero];
    strcpy(parte1, separaString(tamanho, tmp, 0, 5));
    strcpy(parte2, separaString(tamanho, tmp, 9, 10));
  } else if (tipo == 2) {
    numero = geraNumero(10);
    novoTexto[1] = letra[numero];
    strcpy(parte1, separaString(tamanho, tmp, 0, 2));
  }
  
  if (tipo == 3) {
    numero = geraNumero(9);
  } else {
    numero = geraNumero(2000) + geraNumero(3000);  
  }

  if (tipo == 1) {
    snprintf (novoTexto, tamanhoVetor, "%s%d%s", parte1, numero, parte2);
  } else if (tipo == 2) {
    snprintf (novoTexto, tamanhoVetor, "%s%d", parte1, numero);
  } else {
    snprintf (novoTexto, tamanhoVetor, "%c%d", novoTexto[0], numero);  
  }
  strcpy(valorRecebido, novoTexto);
}
