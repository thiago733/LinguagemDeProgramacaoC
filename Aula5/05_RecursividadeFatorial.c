#include <stdio.h>

int fatorial(int numero) {
    int retorno=0;

    // Verifica se está calculando o fatorial de 1
    // Esse seria o último número. 
    // Não há mais o que calcular.
    // Senão houver esse teste, ocorrerá o loop infinito.
    if (numero == 1) {
        return(1);
    }
    // recursividade: chama a própria função 
    printf("\nValor do número antes da chamada recursiva: %d", numero);
    retorno = numero * fatorial(numero-1);
    printf("\nValor do número depois da chamada recursiva e o valor do fatorial: %d, %d", numero, retorno);
    return(retorno);
 }

int main() {
    int nro=0;
    printf ("\nEntre com um valor inteiro: ");
    scanf  ("%d",&nro);
    printf ("\nO fatorial de %d é %d\n\n", nro, fatorial(nro)); 
    return (0);  
}
