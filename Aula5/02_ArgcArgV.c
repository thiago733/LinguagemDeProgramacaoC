#include <stdio.h>
int main( int argc, char *argv[ ] ) {
  int i;
  printf("\nnúmero de argumentos do vetor: %d", argc);
  for(i=0; i < argc; i++) {
    printf("\nÍndice %d – conteúdo: %s  ", i, argv[i]);   
  }
  return 0;
}
/*
  Compilar Macbook: 
    gcc programa.c -o programaExecutavel
    Executar: 
    ./programaExecutavel

  Compilar windows:
    Verificando o compilador:	gcc --version
    Compilando:	gcc nome_fonte.c -o nome_executavel.exe
    Executando:	nome_executavel
*/
