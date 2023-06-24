#include <stdio.h>

#define PRECO_LIVRE 50.0
#define PRECO_QUILO 35.0

struct atendimento {
	int numero;
	float total;
	enum tipo_servico {livre=1, quilo} tipo;
	union servico { 
		int livre;
		float peso; 
	} tipoServico;
};

int main() {
	struct atendimento comanda;

    printf( "Memória alocada para a struct atendimento: %d bytes\n", sizeof(comanda));     
	
	printf("\n\n*** RESTAURANTE COMER É BOM DEMAIS ***\n");
	printf("\nRegistro de Comanda:\n");
	printf("\nNúmero da comanda: ");
	scanf (" %d", &comanda.numero);
	printf("\nTipo de serviço (1-Livre, 2-Quilo: ");
	scanf (" %d", &comanda.tipo);

    if (comanda.tipo == 1) {
        printf("\nLIVRE");
		comanda.total = PRECO_LIVRE;
    }
    else {
        printf("\nQUILO ");
		printf("\nPeso: ");
		scanf (" %f", &comanda.tipoServico.peso);
		printf("\Preco do quilo: %.2f", PRECO_QUILO);
		comanda.total = (PRECO_QUILO * comanda.tipoServico.peso);
    }

	printf("\nTotal a pagar: %.2f", comanda.total);

	return(0);
}