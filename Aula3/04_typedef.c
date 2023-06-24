#include <stdio.h>

int main(){
   typedef float nota;
   nota nota1bi = 0;
   nota nota2bi = 0;
   nota mediaFinal = 0;
   printf ("Digite a média do 1o bimestre: ");
   scanf ("%f", &nota1bi);
  
   printf ("Digite a média do 1o bimestre: ");
   scanf ("%f", &nota2bi);
  
   mediaFinal = (nota1bi + nota2bi) / 2;

   printf ("Media final: %.2f\n", mediaFinal);
   printf("\n\n");
   return(0);
}



