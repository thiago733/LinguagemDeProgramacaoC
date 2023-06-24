#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *pontarquivo;
   char linha[100]; //buffer. Igual ou maior ao tamanho máximo.
   char *ptresult;    //ponteiro que receberá o status do fgets
   char continuar;
        
   pontarquivo = fopen ("lerString.txt", "a"); // leitura
   if (pontarquivo != NULL) {
      printf ("\nArquivo acessado com sucesso.\n");
   }else {
      printf ("\nO arquivo não foi acessado.\n");
      exit(0);
   }
   printf  ("\nArmazenando conteúdo no arquivo:\n"); 
   do {
      continuar = 'S';
      printf  ("\nDigite até 99 caracteres para armazenar no arquivo:"); 
      fgets (linha, 100, stdin);
      fputs (linha, pontarquivo);
      fputs ("\n", pontarquivo);
      printf("Você quer digitar outra linha (S/N)?");
      scanf(" %c", &continuar);
      fflush(stdin);
   } while (continuar == 's' || continuar == 'S');

   printf ("\nFechando o arquivo\n");
   fclose (pontarquivo);  //fechamento do arquivo   

   printf ("\n--- Mostrando as linhas ---\n");
   pontarquivo = fopen ("lerString.txt", "r"); // leitura
   do {             
      ptresult = fgets (linha, 100, pontarquivo); 
      if (ptresult) { 	
         printf ("%s", linha); 
      }
   } while (ptresult != NULL); //Até ponteiro retorne NULL.

   printf ("\nFechando o arquivo\n");
   fclose (pontarquivo);  //fechamento do arquivo  
   return(0);
}
