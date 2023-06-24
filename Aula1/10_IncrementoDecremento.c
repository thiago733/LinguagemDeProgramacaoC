// Operadores de incremento / decremento
#include <stdio.h>
int main() {
    int numero = 10; // Atribuímos o valor 10 para a variável número
    printf ("\nValor do numero: %d", numero); // Mostra o valor 10.
    printf ("\nPos-incremento: %d", numero++); // Mostra o valor da variavel (10) e depois soma 1.
    printf ("\nValor do numero: %d", numero); // Mostra o valor 11.
    printf ("\nPre-incremento: %d", ++numero); // Antes de mostrar, soma 1. Mostra 12. 
    printf ("\nPos-decremento: %d", numero--); // Mostra o valor (12) e depois decrementa 1.
    printf ("\nValor do numero: %d", numero); // Mostra o valor 11.
    printf ("\nPre-decremento: %d", --numero); // Antes de mostrar, diminui 1. Mostra 10. 
}

