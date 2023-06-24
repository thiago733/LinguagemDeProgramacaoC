// Função com chamada por valor
#include <stdio.h>

int valor(int a, int b)  { 
    a = a + 3; 
    b = b + 2;
    printf("\nValores modificados dentro da função valor: nro1 = %d, nro2 = %d", a, b);
    return(0);  
}

int referencia(int *a, int *b)  {
    (*a) = (*a) + 3; 
    (*b) = (*b) + 2;
    printf("\n\nValores modificados dentro da função referência: nro1 = %d, nro2 = %d", *a, *b);
    return(0);  
}

int main() {
    int nro1 = 2, nro2 = 3, total;
    printf("\nMain: valores de nro1 = %d, nro2 = %d", nro1, nro2);    
    valor(nro1,nro2); //enviando uma cópia dos valores                     
    printf("\n\nMain: valores após a chamada da função valor: nro1 = %d, nro2 = %d", nro1, nro2);
    referencia(&nro1, &nro2); //endereço
    printf("\n\nMain: valores após a chamada da função referência: nro1 = %d, nro2 = %d", nro1, nro2);
    return(0);    
}
