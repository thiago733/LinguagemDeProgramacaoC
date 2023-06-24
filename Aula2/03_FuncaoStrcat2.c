#include <stdio.h>
#include <string.h>  // arquivo de cabeçalho para trabalhar com strings

int main(){
   char nome[30]; 
   char sobrenome[30]; 
   printf ("Informe o seu primeiro nome: ");
   gets   (nome); 
   printf ("Informe o seu último sobrenome: ");
   fgets (sobrenome, 30, stdin);
   strcat (nome, " ");  
   strcat (nome, sobrenome);  
   printf ("\n");
   printf ("O nome seu nome completo é: %s ", nome);  
   printf ("\n\n");
   for (int i=0; i < strlen(nome); i++) {
      printf ("\n%c,", nome[i]);  
   }   
   for (int i=0; i < strlen(nome); i++) {
      nome[i] = tolower(nome[i]);
   }
   printf ("\nO nome em minúsculo é: %s", nome);     
   
   for (int i=0; i < strlen(nome); i++) {
      nome[i] = toupper(nome[i]);
   }   
   printf ("\nO nome em minúsculo é: %s", nome);     
   return(0);
}


