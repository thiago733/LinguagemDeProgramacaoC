#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structs.h"
#include "geraNumero.h"
#include "separaString.h"
#include "geraNovoNumero.h"

int main() {
    struct cliente (*ptrCli) = c;
    struct passagem (*ptrPas) = p;

    for (int i=0; i<2; i++){ 
        printf ("\nCADASTRO DE CLIENTE %d de %d \n", i+1, 2);
        strcpy (ptrPas[i].numpass, "XXDSF2563SD");
        strcpy (ptrPas[i].voo, "ZZ9999");
        strcpy (ptrPas[i].portao, "G9");
        printf ("\nCódigo do cliente .....: ");
        scanf  (" %d", &ptrCli[i].codigo);
        printf ("Nome completo .........: ");
        fflush (stdin); 
        fgets   (ptrCli[i].nome, 50, stdin);
        printf ("Rua ...................: ");
        fgets   (ptrCli[i].end.rua, 40, stdin);
        printf ("Numero ................: ");
        scanf  (" %d", &ptrCli[i].end.numero);
        printf ("Bairro ................: ");
        fflush (stdin); 
        fgets   (ptrCli[i].end.bairro, 20, stdin);
        printf ("Complemento ...........: ");
        fgets   (ptrCli[i].end.complemento, 30, stdin);
        printf ("CEP ...................: ");
        scanf  (" %d", &ptrCli[i].end.cep);
        printf ("Cidade ................: ");
        fflush (stdin); 
        fgets   (ptrCli[i].end.cidade, 30, stdin);
        printf ("UF ....................: ");
        fflush (stdin); 
        fgets   (ptrCli[i].end.uf, 2, stdin);
        printf ("Telefone ..............: ");
        fflush (stdin); 
        fgets   (ptrCli[i].telefone, 12, stdin);
        printf ("Genero (F/M) ..........: ");
        scanf  (" %c", &ptrCli[i].genero);
        printf ("Data de Nascimento ....: ");
        printf ("\n\t\tDia ...: ");
        scanf  (" %d", &ptrCli[i].nasc.dia);
        printf ("\t\tMês ...: ");
        scanf  (" %d", &ptrCli[i].nasc.mes);
        printf ("\t\tAno ...: ");
        scanf  (" %d", &ptrCli[i].nasc.ano);
        printf ("E-mail de contato .....: ");
        fflush (stdin); 
        fgets   (ptrCli[i].email, 50, stdin);
    
        printf ("\nREGISTRO DE EMBARQUE \n");
        gerarNovoNumero(ptrPas[i].numpass, 12, 1); 
        gerarNovoNumero(ptrPas[i].voo, 07, 2); 
        gerarNovoNumero(ptrPas[i].portao, 03, 3); 

        printf ("Número da Passagem: %s\n", ptrPas[i].numpass);
        printf ("Passageiro: %s\n", ptrCli[i].nome); 
        printf ("Número do voo: %s\n", ptrPas[i].voo);
        printf ("Classe (A/E/C): ");
        scanf  (" %c", &ptrPas[i].classe);
        printf ("Assento: ");
        fflush (stdin); 
        fgets (ptrPas[i].assento, 4, stdin);
        printf ("Cidade de origem: ");
        fflush (stdin); 
        fgets (ptrPas[i].origem, 50, stdin);
        printf ("Cidade de destino: ");
        fflush (stdin); 
        fgets (ptrPas[i].destino, 50, stdin);
        printf ("Data de embarque: ");
        printf ("\n\t\tDia: ");
        scanf  (" %d", &ptrPas[i].dt.dia);
        printf ("\t\tMês: ");
        scanf  (" %d", &ptrPas[i].dt.mes);
        printf ("\t\tAno: ");
        scanf  (" %d", &ptrPas[i].dt.ano);
        printf ("Portão de embarque: %s\n", ptrPas[i].portao);
        ptrPas[i].hh.hora = geraNumero(23);
        ptrPas[i].hh.minuto = geraNumero(59);
    }

    for (int i=0; i<2; i++) {
        printf ("\n CARTÃO DE EMBARQUE %d de %d \n", i+1, 2);
        printf ("Passagem: %s\n", ptrPas[i].numpass);
        printf ("Passageiro: %s\n", ptrCli[i].nome); 
        printf ("Voo: %s\n", ptrPas[i].voo);
        printf ("Classe ..: %c\n", ptrPas[i].classe);
        printf ("Assento .: %s\n", ptrPas[i].assento);
        printf ("Origem ..: %s\n", ptrPas[i].origem);
        printf ("Destino .: %s\n", ptrPas[i].destino);
        printf ("Data de embarque: %d/%d/%d\n", ptrPas[i].dt.dia, 
                                  ptrPas[i].dt.mes, ptrPas[i].dt.ano);
        printf ("Hora de embarque: %d:%d\n", ptrPas[i].hh.hora,
                                          ptrPas[i].hh.minuto);    
        printf ("Portão: %s\n", ptrPas[i].portao);
    }    
    return(0);    
}
