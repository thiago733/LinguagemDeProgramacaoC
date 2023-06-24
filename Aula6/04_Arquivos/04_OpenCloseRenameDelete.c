#include <stdio.h>

void renomearArquivo();
void excluirArquivo();

int main() {

	FILE *pontarquivo;
    pontarquivo = fopen("arquivoMenu.txt", "r");
    if (pontarquivo == NULL){
	    pontarquivo = fopen("arquivo.txt", "a");
    } else {
		printf ("\nArquivo criado com sucesso.\n");
    }
    fclose(pontarquivo);  
    printf ("\nArquivo fechado.\n");

	int opcao;
	do {
		opcao = 0;
		printf("\n--- Manipulação de Arquivos ---\n");
		printf ("\n[1] - Renomear o arquivo");
		printf ("\n[2] - Excluir o arquivo");
		printf ("\n[9] - Sair");
		printf ("\nInforme a opção desejada: ");     
		scanf  (" %d", &opcao);
		switch (opcao){
			case 1:
				renomearArquivo();
				break;
			case 2:
				excluirArquivo();
				break;
			case 9:
				break;
			default: 
				printf ("\nOperacao inválida! ");
				break;
		}
	} while (opcao != 9);
    return(0);    
}

void renomearArquivo() {
    char atual[20], novo[20];
    
    printf ("\n*** RENOMEANDO ARQUIVOS ***\n");
    
    printf ("\nDigite o nome do arquivo a renomear: ");
    scanf (" %s", atual);
    printf ("\nDigite o novo nome do arquivo: ");
    scanf (" %s", novo);

    if (rename(atual, novo) == 0) {
       printf ("O arquivo %s foi renomeado para %s.", atual, novo);
	} else {
		printf("Não foi possível renomear o arquivo %s.", atual);
	}
}

void excluirArquivo() {
	char arquivo[20];
    printf("\n\n*** EXCLUSÃO DE ARQUIVOS \n");
    printf("\nInforme o nome do arquivo a ser excluído: ");
    scanf(" %s", arquivo);
    if (remove(arquivo)==0) {
		printf("\nO arquivo %s foi excluído com sucesso.\n\n", arquivo);
	} else {
		printf("\nErro ao apagar o arquivo %s.\n\n", arquivo);
	}
}
