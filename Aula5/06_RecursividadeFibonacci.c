#include<stdio.h>

int fibonacci(int numeroAnterior, int numero, int limite);

int main() {
    int limite = 0;
    static int numeroAnterior = 0, numero = 1;
    printf("+----- Recursividade - Sequência de fibonacci -----+\n");
    printf("Informe a quantidade de números a ser gerada: ");
    scanf("%d", &limite);
    printf("\nSérie Fibonacci é:\n"); 
    printf("0  1  ");
    limite--;
    fibonacci(numeroAnterior, numero, limite);
    printf("\n\n");
    return(0);
}
 
int fibonacci(int numeroAnterior, int numero, int limite) {
    static int i = 1;
    int proximoNumero;
    if (i == limite) {
        return (0);
    } else {
        proximoNumero = numeroAnterior + numero;
        numeroAnterior = numero;
        numero = proximoNumero;
        printf("%d  ", proximoNumero);
        i++;
        fibonacci(numeroAnterior, numero, limite);
   }
   return (0);
}
