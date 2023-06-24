//Tamanho de matriz definido pelo usuário
#include <stdio.h>
#include <stdlib.h>

int main(){
  int **ptrmatriz, linha=0, coluna=0, i=0, j=0, valor=0;

  printf("\n\n*** Matriz dinâmica ***\n");
  printf("\n\nInsira o numero de LINHAS da matriz: ");
  scanf (" %d", &linha);
  printf("Insira o numero de COLUNAS da matriz: ");
  scanf (" %d", &coluna);

  // aloca um vetor de ponteiros para inteiros 
  ptrmatriz = malloc(linha * sizeof(int*));

    // cada posição do vetor aponta para outro vetor 
    for (i=0; i < linha; i++){
        ptrmatriz[i] = malloc(coluna * sizeof(int) ) ;
    }

    // informar valores 
    if (ptrmatriz){
        printf ("\nStatus: Memória alocada com sucesso.\n");
        for(i = 0; i < linha; i++){
            for (j = 0; j < coluna; j++) {
                printf("\nDigite o valor para a posicao %d X %d : ", i+1, j+1);
                valor=0;
                scanf(" %d", &valor);
                ptrmatriz[i][j] = valor;
            }
        }
    }
    else {
       printf ("\nStatus: Memória insuficiente.\n");
       exit(1); //fim da execução da função main()
    }

    printf("\n\tApresentando a matriz: \n");        
    for(i =0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("\t%i", ptrmatriz[i][j]); 
        }
        printf("\n") ;
    }
    printf("\n\tApresentando o conteudo e endereco: \n");        
    for(i =0; i < linha; i++){
        printf("\nEndereco fisico de ptrmatriz i ...: %d, %p", i, &ptrmatriz[i]);
        printf("\nConteúdo ptrmatriz i .............: %d, %d, %p", i, *ptrmatriz[i], ptrmatriz[i]);
        for(j = 0; j < coluna; j++){
            printf("\t%i", ptrmatriz[i][j]); 
            printf("\nEndereco fisico de ptrmatriz j ...: %d, %p", j, &ptrmatriz[i][j]);
            printf("\nConteúdo ptrmatriz j .............: %d, %d, %p", j, **ptrmatriz, ptrmatriz[i][j]);
        }
        printf("\n") ;
    }


    free(ptrmatriz);
    return(0);
}
