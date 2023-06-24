#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct caracteristica {
       char  combustivel[20];
       char  cor[20];
       int   nro_portas;
};
struct carro {
       char  chassi[18]; //17 caracteres +1 para o ‘\0’ (fim).
       char  modelo[30];
       char  marca[30];
 
       struct caracteristica caract; //ref. struct externa
 
       int   ano_modelo;
       int   ano_fabricacao;
       float preco;
}c;
int main(){
    //exemplos de manipulação de structs dentro de structs:
    strcpy (c.caract.cor,"Prata");
    printf ("\nNúmero de portas: %s", c.caract.cor);
    
    printf ("\nModelo .........: ");
    fflush (stdin); 
    gets   (c.modelo); 
    
    printf ("\nNúmero de portas: ");
    scanf  ("%d", &c.caract.nro_portas);      
    
    return(0);
}
