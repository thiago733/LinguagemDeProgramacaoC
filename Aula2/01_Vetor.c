//Código em C
#include <stdio.h>
int main() {
    //declaração de vetor com atribuição direta 
    float notas[4];
    float notas[4] = {3.5, 7.5, 9.2, 6.8};
    
    for (int i=0; i<4; i++){ 
        printf("\nDigite a nota do aluno: ");
        scanf(" %f", &notas[i]); 
    }
    // mostra a entrada:
    for (int i=0; i<4; i++) {
        printf ("\nNota %d: %.2f", i, notas[i]);  
    }    
}

