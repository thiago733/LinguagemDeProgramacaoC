//STATIC() - Mantendo o valor de uma variável 
//entre as chamadas de uma função.
#include <stdio.h>

int soma (int a)  {
    static int valor = 1;   //mantém o valor da última chamada,
                            //última vez que foi usado.
    printf("valor dentro da função: %d\n",valor);
    valor = valor + a;
    return(valor);  //sem o uso do static no momento que sair
}                   //da função, a variável local perde    
			        //o último valor e assume o valor 1.

int main() {
    int nr = 1;
    printf ("Chamando a primeira vez: %d\n", soma(nr));
    printf ("Chamando a segunda vez:  %d\n", soma(nr));
    printf ("Chamando a terceira vez: %d\n", soma(nr));  
    return(0);
}

