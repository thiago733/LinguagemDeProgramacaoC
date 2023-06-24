#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    int codigo;
    char nome[10];
    char endereco[10];   
} dados;

int main()	{
   FILE *ptarq;
   ptarq=fopen("struct.txt", "w");    

   if (ptarq!=NULL){
      printf ("\n\nArquivo criado com sucesso\n");
   }else {
      printf ("\nO arquivo não foi criado.\n");
      exit(0);
   }    

   printf ("\n*** Cadastrando os dados ***\n");
   printf ("\nCódigo .: ");
   scanf  ("%d", &dados.codigo);
   fflush (stdin);
   printf ("\nNome ...: ");
   fgets  (dados.nome, 10, stdin);
   fflush (stdin);
   printf ("\nEndereco: ");
   fgets  (dados.endereco, 10, stdin);
   fflush (stdin);
   fprintf (ptarq,"Dados gravados da struct para o arquivo\n");
   fprintf (ptarq, "Cód.\tNome\tEndereco\n");
   fprintf (ptarq, "%d\t%s\t%s\n", dados.codigo, dados.nome, dados.endereco);    
  
   fclose(ptarq);    

   ptarq=fopen("struct.txt", "r");    

   if (ptarq!=NULL){
      printf ("\n\nArquivo criado com sucesso\n");
   } else {
      printf ("\nO arquivo não foi criado.\n");
      exit(0);
   }    
    
   fscanf(ptarq, "%d %s %s", dados.codigo, dados.nome, dados.endereco);
   printf ("\nDados lidos foram:\n %d, %s, %s", dados.codigo, dados.nome, dados.endereco);

   fclose(ptarq);    
   return(0);        
}
