#include <stdio.h>
#include <stdlib.h>

struct livro {
	  int codigo;
	  char titulo[50]; 
	  char autor[50];
	  int ano_lancamento;
	  char isbn[14];
} exemplar; //variável do tipo struct.

int main(){
    printf ("\n*** Recebendo dados ***\n");
    printf ("\nCodigo ...: ");
    scanf  ("%d", &exemplar.codigo);
    
    printf ("\nTítulo ...: ");
    fflush (stdin); 	//fflush limpa o buffer do teclado
    gets (exemplar.titulo);

    printf ("\nAutor ....: ");
    fflush (stdin); 	//fflush limpa o buffer do teclado
    gets (exemplar.autor);

    printf ("\nLançamento: ");
    scanf ("%d", &exemplar.ano_lancamento);

    printf ("\nISBN .....: ");
    fflush (stdin); 	
    gets (exemplar.isbn);

    system ("cls");
    printf ("\n*** Apresentando dados ***\n");
    printf ("\nCodigo ...: %d\n", exemplar.codigo);
    printf ("\nTítulo ...: %s\n", exemplar.titulo);
    printf ("\nAutor ....: %s\n", exemplar.autor);
    printf ("\nLançamento: %d\n", exemplar.ano_lancamento);
    printf ("\nISBN .....: %s\n", exemplar.isbn);
    
    printf ("\nstruct %d ", sizeof(exemplar));  
    printf ("\nCodigo: %d ", sizeof(exemplar.codigo));  
    printf ("\nTitulo: %d ", sizeof(exemplar.titulo));  
    printf ("\nAutor: %d ", sizeof(exemplar.autor));  
    printf ("\nLançamento: %d ", sizeof(exemplar.ano_lancamento));  
    printf ("\nISAN: %d ", sizeof(exemplar.isbn));  
    printf("\n\n");
    
    return(0);
}
