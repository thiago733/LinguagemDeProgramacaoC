// Código em C
#include <stdio.h>
#define pi 3.1415

int main() {
// declaração de variáveis 
    int idade = 26;
    int estudando = 0;
    char genero = 'M';
    float altura = 1.68;
    double salario = 0.0;
    const int centimetro = 100; 

// mostrando as variaveis;
    printf ("%c", genero);
    printf ("\n%d", idade);
    printf ("\n%f", altura);
    printf ("\n%d", estudando);
    printf ("O valor de PI no define: %f", pi);
    printf ("\n1 metro tem %d centimetros", centimetro);


   printf ("\nint: %d ", sizeof(idade));  
   printf ("\nchar: %d ", sizeof(genero));  
   printf ("\nfloat: %d ", sizeof(altura));  
   printf ("\ndouble: %d ", sizeof(salario));  
   printf("\n\n");

   printf ("\nint: %d ", sizeof(int));  
   printf ("\nchar: %d ", sizeof(char));  
   printf ("\nfloat: %d ", sizeof(float));  
   printf ("\ndouble: %d ", sizeof(double));  
   printf("\n\n");     
}

