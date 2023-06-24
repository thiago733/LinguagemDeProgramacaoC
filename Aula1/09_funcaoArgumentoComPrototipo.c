// Código em C
#include <stdio.h>

int menorNumero(int nro2, int nro1);

void main() {
    int n1=0, n2=0;
    printf ("Digite o 1o numero:\n");
    scanf ("%d", &n1);
    printf ("Digite o 2o numero:\n");
    scanf ("%d", &n2);

    menorNumero(n1, n2); //passagem de argumentos

}

int menorNumero(int nro2, int nro1) {
    if (nro1 < nro2){
        printf("\n%d e menor que %d", nro1, nro2);
    }
    else {
        if(nro2 < nro1){
            printf("\n%d e menor que %d", nro2, nro1);
            }
        else {
           printf("\n%d e igual a %d", nro1, nro2);
        }
    }
    return (0);
}

