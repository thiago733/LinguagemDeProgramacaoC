#include "mensagem.h"

// chama a função mensagem()
int main() {
	mensagem();
	return (0);
}

/*
Complinaod multiplos arquivos:
1) Formar:
	1) Linkedição:
		gcc -c main.c
		gcc -c mensagem.c	
	2) Executável:
		gcc main.o mensagem.o -o exemplo

2) Forma:
		gcc main.c mensagem.c -o exemplo
*/



