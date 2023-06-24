#include <stdio.h>

int main(){
    int numero[5][5];
    int linha=0, coluna=0; 
    
    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++){
            printf ("Valor inteiro na linha %d, coluna %d: ", linha+1, coluna+1);
            scanf  ("%d", &numero[linha][coluna]);
        }
    }   
    return(0);
}
