#include <stdio.h>
#include <stdlib.h>

struct livro {
	  int codigo;
	  char titulo[50]; 
	  char autor[50];
	  int ano_lancamento;
	  char isbn[14];
} exemplar[5]; //vetor do tipo struct.

int main(){
    int i = 0;
    printf ("\n*** Recebendo dados ***\n");
 
    for (i=0; i<5; i++){
        printf("\nLivro %d de %d", i+1, 5);
        printf ("\nCodigo ..........: ");
        scanf  ("%d", &exemplar[i].codigo);
    
        printf ("Título ............: ");
        fflush (stdin); 	//fflush limpa o buffer do teclado
        gets (exemplar[i].titulo);

        printf ("Autor .............: ");
        fflush (stdin); 	//fflush limpa o buffer do teclado
        gets (exemplar[i].autor);

        printf ("Ano de lançamento .: ");
        scanf ("%d", &exemplar[i].ano_lancamento);

        printf ("ISBN ..............: ");
        fflush (stdin); 	
        gets (exemplar[i].isbn);
    }

    printf ("\n*** Apresentando dados ***\n");

    for (i=0; i<5; i++){
        printf("\nLivro %d de %d", i+1, 5);
        printf ("Codigo ...: %d\n", exemplar[i].codigo);
        printf ("Título ...: %s\n", exemplar[i].titulo);
        printf ("Autor ....: %s\n", exemplar[i].autor);
        printf ("Lançamento: %d\n", exemplar[i].ano_lancamento);
        printf ("ISBN .....: %s\n\n", exemplar[i].isbn);
    }
    return(0);
}
