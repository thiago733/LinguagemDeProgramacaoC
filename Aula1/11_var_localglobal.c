/*Em casos onde exista variáveis locais e globais 
com o mesmo nome, sempre a variável local será escolhida. */

#include <stdio.h>

int x = 25; //declaração e inicialização de uma variável global.
int apresentar()  {
    int x = 10; //declaração e inicialização de uma variável 
                //local dentro da função apresentar() 
    printf("A variável x da função equivale a: %d\n", x);
    return(0);
}

void main()  {
    printf("Variável global x equivale a: %d\n", x);
    apresentar();
}


