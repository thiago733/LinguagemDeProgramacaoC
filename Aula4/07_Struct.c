#include <stdio.h>
#include <stdlib.h>

struct livro {
	  int codigo;
	  char titulo[50]; 
	  char autor[50];
	  int ano_lancamento;
	  char isbn[14];
}exemplar; //variável do tipo struct.

int main(){
    struct livro (*ponteiro) = &exemplar; //endereço para ponteiro
   
    printf ("\n*** Recebendo dados ***\n");
    printf ("Código ...: ");
    scanf  ("%d", &(*ponteiro).codigo);

    printf ("Título ...: ");
    fflush (stdin); 	//fflush limpa o buffer do teclado
    gets   ((*ponteiro).titulo);

    printf ("Autor ....: ");
    fflush (stdin); 	
    gets   ((*ponteiro).autor);

    printf ("Lançamento: ");
    scanf  ("%d", &(*ponteiro).ano_lancamento);

    printf ("ISBN .....: ");
    fflush (stdin); 	
    gets   ((*ponteiro).isbn);

    printf ("\n\n*** Apresentando dados ***");
    printf ("\nCódigo ...: %d", (*ponteiro).codigo);
    printf ("\nTítulo ...: %s", (*ponteiro).titulo);
    printf ("\nAutor ....: %s", (*ponteiro).autor);
    printf ("\nLançamento: %d", (*ponteiro).ano_lancamento);
    printf ("\nISBN .....: %s\n\n", (*ponteiro).isbn);
    
    return(0);
}