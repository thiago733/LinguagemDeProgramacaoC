//SEM STATIC - Mantendo o valor de uma variável entre 
//as chamadas de uma função
#include <stdio.h>

int soma (int a) {
    int valor = 1; 
    printf("valor dentro da função: = %d\n",valor);
    valor = valor + a;
    return(valor);  
}   //sem o uso do static no momento que sair da função, 
    // a variável local perde o valor

int main() {
    int nr = 1;
    printf ("Chamando a primeira vez: %d\n", soma(nr));
    printf ("Chamando a segunda vez:  %d\n", soma(nr));
    printf ("Chamando a terceira vez: %d\n", soma(nr));  
    return(0);
}

