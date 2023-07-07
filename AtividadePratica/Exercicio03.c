#include <stdio.h>

int main() {
    //Declarando de variáveis e inicializando de algumas
    int primeiroNumero;
    int segundoNumero;
    int auxiliar;
    int numero;
    primeiroNumero = 0;
    segundoNumero = 1;

    //Coletando o número para a série de Fibonacci
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", primeiroNumero);

    //Processando a série de Fibonacci
    auxiliar = primeiroNumero + segundoNumero;
    while (auxiliar <= numero){
        
        printf("%d\n", auxiliar);
        primeiroNumero = segundoNumero;
        segundoNumero = auxiliar;
        auxiliar = primeiroNumero + segundoNumero;
        }
}