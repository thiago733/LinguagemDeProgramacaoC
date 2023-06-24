//Arquivos binários – Usando structs
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct pessoa {
    int codigo;
    char nome[41];
    char genero;
    char endereco[41];
} reg;

int main(){
    char resp = ' ';
    int  cont = 0;    
    FILE *ptarq;
    ptarq = fopen ("Cadastro.bd", "rb+"); 
    
    if (ptarq == NULL) {//verifica se o arquivo foi aberto.
       ptarq = fopen ("Cadastro.bd", "wb+"); //Não abriu, cria.
    }
    do {
        cont++;
        printf ("\n*** Cadastro de dados ***\n");
        printf ("\nCódigo ...: %d", cont);
        reg.codigo = cont;
        printf ("\nNome .....: ");
        gets   (reg.nome);
        do {
            printf ("\nGênero (F/M) : ");
            scanf  (" %c", &reg.genero);
            fflush (stdin);
            reg.genero = toupper(reg.genero);
            if (reg.genero!='F' && reg.genero!='M') {
                printf ("\n Gênero inválido! Digite F ou M.");
            }
        } while (reg.genero!='F' && reg.genero!='M');

        printf ("\nEndereço .: ");
        gets   (reg.endereco);
        
        fwrite (&reg, sizeof(struct pessoa), 1, ptarq);        
        
        printf ("\n Deseja incluir novo registro (S/N)? ");
        scanf (" %c", &resp);
        fflush (stdin);
        resp = toupper(resp);
    } while(resp=='S');

    printf ("\n\n Inclusão de dados concluída com sucesso. ");
    fclose (ptarq);

    printf("\n--- Consultando os dados ---\n");

    ptarq = fopen ("Cadastro.bd", "rb"); 
    if (ptarq == NULL) { 
       printf("Impossivel abrir arquivo fichaseek.bin.");
       return(0);
    }
    
    printf ("\nExiste %d registros incluídos.\n", cont);
    do {
        cont = 0;
        printf ("\ncódigo que deseja consultar: ");
        scanf(" %d", &cont); 
        // como inicia no indice 0, devemos diminuir 1.
        cont--;
        // posiciona-se no primeiro registro
        fseek  (ptarq, 0, SEEK_SET);  //FSEEK()
        // vai posicionar-se no registro digitado pelo usuário
        fseek  (ptarq, cont*sizeof(struct pessoa), SEEK_SET);
        fread  (&reg, sizeof(struct pessoa), 1, ptarq);        
        printf ("\nCodigo: %d", reg.codigo);
        printf ("\nNome: %s", reg.nome);
        printf ("\nGênero: %c", reg.genero);
        printf ("\nEndereçco: %s", reg.endereco);
        printf ("\n Deseja fazer outra consulta (S/N)? ");
        scanf (" %c", &resp);
        fflush (stdin);
        resp = toupper(resp);
    } while(resp=='S');
    
    fclose (ptarq);
    return(0);
}
