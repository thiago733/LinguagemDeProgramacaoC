//tamanho do vetor fornecido pelo usuario
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro, tamanho=0, i=0;

    printf("\nInforme o tamanho do vetor: ");
    scanf ("%d", &tamanho);

    ponteiro = malloc(tamanho * sizeof(int)); //alocação
    //ponteiro armazena o endereço de memória alocado

    if (ponteiro==NULL) { //testando retorno
       printf ("Memória insuficiente");
       exit(1); //fim da função main()
    } 

    printf("\nPopulando o vetor:");
    for (i=0; i<tamanho; i++) {
        printf("\nInforme o %do valor: ", i+1);
        scanf ("%d", &ponteiro[i]);
    }

    printf("\nApresentando o vetor:");
    for (i=0; i<tamanho; i++) {
        printf("\t%d ", ponteiro[i]);
    }

    printf("\n\nProcesso de liberação de memória alocada.\n");
    free(ponteiro); //liberação de memória
    printf("Memória liberada com sucesso.\n\n");

    return(0);
}
