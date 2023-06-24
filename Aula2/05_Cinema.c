#include <stdio.h>
#include <ctype.h>
#include <string.h> 

// criando o menu de opcaox e as duas funções de total de ingressos e taxa de ocupacao

char fileira[11] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','\0' }; 
char poltrona[10][10]; // X indica poltrona ocupada

// variáveis para controle dos ingressos
char tipoIngresso[2][15]; // contem os tipos de ingressos
int totalTipoIngresso[2]; // acumular o número total vendido de ingresso por tipo
float valorTotalIngresso[2]; // acumula o valot total vendido por tipo de ingresso.
float valorIngresso[2]; // valor do ingresso de cada tipo;

// variáveis para controle do pagamento
char tipoPagamento[4][20]; // contem os tipos de pagamento
int pgto = 0; // receber o tipo de pagaemento
 
// protótipo das funçòes
void mostraSala(char fileira[11], char poltrona[10][10]);
int vendaIngresso();
int totalVendido();
int taxaOcupacao();
void inicializar();

int main() {

    // inicializa as variaveis globaix
    inicializar();

    // Inicio do menu
    int opcao=0;  
    do {
        printf ("\n--- Menu de opções --");
        printf ("\n[1] Venda de ingressos");     
        printf ("\n[2] Total de ingressos vendidos");
        printf ("\n[3] Taxa de ocupação");
        printf ("\n[4] Sair ");
        printf ("\nDigite a opção desejada: ");
        scanf  (" %i", &opcao);
        switch (opcao){
            case 1:
            vendaIngresso();
            break;
            case 2:
            totalVendido();
            break;
            case 3:
            taxaOcupacao();
            break;
            default: 
                printf ("\nOperacao inválida! ");
            break;
        }
    } while (opcao != 4);

}

void inicializar() {

    int i = 0, j = 0;
    // inicializando as variaveis de total
    for (i = 0; i < 2 ; i++) {
        valorTotalIngresso[i] = 0.0;
        valorIngresso[i] = 0.0;
        totalTipoIngresso[i] = 0;
    }
    //atribuindo os valores dos ingresso
    valorIngresso[0] = 40.00; // inteira
    valorIngresso[1] = 20.00; // meia entrada

    // inicializando as poltronas
    for (i = 0; i < 10 ; i++) {
        for (j = 0; j < 10 ; j++) {
            poltrona[i][j] = ' ';
        }
    }

    // atribuindo os tipos de ingresso para a matriz.
    strcpy (tipoIngresso[0], "Inteira"); 
    strcpy (tipoIngresso[1], "Meia entrada"); 

    // atribuindo os tipos de pagamento.
    strcpy (tipoPagamento[0], "Dinheiro"); 
    strcpy (tipoPagamento[1], "PIx"); 
    strcpy (tipoPagamento[2], "Cartão débito"); 
    strcpy (tipoPagamento[3], "Cartão crédito"); 
}

int vendaIngresso() {

    int i = 0, tipo = 0, linha = 0, coluna = 0;
    char fila = ' ', continuar = ' ';
    float valorTotalCliente = 0.0;
    int totalIngressosCliente = 0;
  
    // inicializando as variáveis
    fila = ' ';
    continuar = 'S';
    linha = 0;
    coluna = 0;

    // inicializa as variaveis do cliente:
    valorTotalCliente = 0.0;
    totalIngressosCliente = 0;

    // recebendo a poltrona
    do {

        // mostranto a sala de exibição
        mostraSala(fileira, poltrona);

        // recebendo a fileira da poltrona
        do {
            printf("Informe a fileira: ");
            scanf (" %c", &fila);   

            // convertendo para maiúscula a fileira:
            fila = toupper(fila); 

            // verificar se h[a o ascii das letras]

            // verificando se a letra informada é valida.
            // Já pegaremos o índice da letra para usarmos na matriz da poltrona
            // A = 0, B = 1, C = 2 e D = 3
            linha = 20; // escolher um número maior que 4. Assim saberemos que a letra
                        // informada está inválida.
            for (i = 0; i < 10 ; i++) {
                if (fileira[i] == fila) {
                    linha = i;
                };
            }
            // O For irá comparar a letra digitada com o vetor das fileiras.
            // Se a letra existir no vetor, iremos pegar o seu índice no vetor
            // Caso contrário a linha ficará inválido e não saíremos do loop.
            if (linha == 20) {
                printf("\nLetra inválida!\n");
            }
        }  while (linha == 20);

        // recebendo a posição da poltrona na fileira
        do {
            printf("Informe o número da poltrona na fileira %c: ", fila);
            scanf (" %i", &coluna);   
            coluna = coluna - 1; // usuário irá digitar a posição e precisamos do índice. 

            if (coluna < 0 || coluna > 9) {
                printf("\nNúmero da poltrona inválido!\n");
            }

        } while (coluna < 0 || coluna > 9 );

        // Verificando se a poltrona está disponível:
        if (poltrona[linha][coluna] == ' ') {
            poltrona[linha][coluna] = 'X';
        } else {
            printf("\nPoltrona já vendida. Tente outra\n");
        }

        //receber o tipo de ingresso:
        do {
            tipo = 0;
            printf("\nTipo do ingresso\n");
            for (i=0; i < 2; i++) {
                printf("[%i] %s\n", i+1, tipoIngresso[i]);        
            }
            printf("\nInforme o tipo de ingresso: ");
            scanf (" %i", &tipo);   
            tipo = tipo - 1; // Lembrando: o usuáiro vai digitar a posição. PRecisamos do índice
            if (tipo < 0 || tipo > 1 ) {
                printf("\nTipo de ingresso inválido!!!\n");
            }

        } while (tipo < 0 || tipo > 1);

        // calcula o número e o valor total a pagar do cliente
        valorTotalCliente = valorTotalCliente + valorIngresso[tipo];
        totalIngressosCliente = totalIngressosCliente + 1;

        // acumulo o número e o valor total vendido por tipo de ingresso
        valorTotalIngresso[tipo] = valorTotalIngresso[tipo] + valorIngresso[tipo];
        totalTipoIngresso[tipo] = totalTipoIngresso[tipo] + 1;

        // Pergunta se o cliente vaic ontinuar comprando ingresso
        printf("Continuar comprando ingressos (S/N)? ");
        scanf (" %c", &continuar);   
        continuar = toupper(continuar); 

    } while (continuar == 'S');

    //receber a forma de pagamento
    do {
        pgto = 0;
        printf("\nForma de pagamento\n");
        for (i=0; i < 4; i++) {
            printf("[%i] %s\n", i+1, tipoPagamento[i]);        
        }
        printf("\nInforme a forma de pagamento: ");
        scanf (" %i", &pgto);   
        pgto = pgto - 1; // Lembrando: o usuáiro vai digitar a posição. PRecisamos do índice
        if (pgto < 0 || pgto > 3 ) {
            printf("\nForma de pagamento inválida!!!\n");
        }
    } while (pgto < 0 || pgto > 3);
    
    //Mostra o número e o valor total de ingressos comprados pelo cliente

    printf("\nVocê comprou:");
    printf("\n%i ingressos", totalIngressosCliente);
    printf("\nValor total foi de %.2f", valorTotalCliente);
    printf("\nForma de pagamento será %s", tipoPagamento[pgto]);
    
    mostraSala(fileira, poltrona);
    return(0);
}

int totalVendido() {
    int i=0;
    printf("\n--- Total vendido ---\n");
    for (i=0; i< 2; i++) {
        printf("\nTipo de ingresso: %s", tipoIngresso[i]);
        printf("\nNúmero de ingressos: %i", totalTipoIngresso[i]);
        printf("\nValot total: %.2f", valorTotalIngresso[i]);
        printf("\n");
    }
    return(0);
}

int taxaOcupacao() {
    int i = 0, j = 0;
    float vendidos = 0.0, lugares = 0.0;
    float taxaOcupacao = 0.0;
    for (i = 0; i < 10 ; i++) {
        for (j = 0; j < 10 ; j++) {
            if (poltrona[i][j] == 'X') {
                vendidos = vendidos + 1;
            } 
            lugares = lugares + 1;
        }
    }
    taxaOcupacao = (vendidos / lugares) * 100;
    printf("\nTotal de lugares: %.2f", lugares);
    printf("\nIngressos vendidos: %.2f", vendidos);
    printf("\nTaxa de ocupação está em %.2f%", taxaOcupacao);
    return(0);
}

void mostraLinha() {
    printf(" +---+---+---+---+---+---+---+---+---+---+----+\n");
}

void mostraSala(char fileira[11], char poltrona[10][10]) {

    int i = 0, j = 0;
   //Mostrando as poltronas da sala
    printf("\n ----- Um sonho a mais - Sala de exibição -----\n");
    mostraLinha();
    printf(" |  ");
    for (i = 0; i < 10 ; i++) {
        printf(" | ");
        printf("%i", i+1 );
    }
    printf(" |\n");
    mostraLinha();    
    for (i = 0; i < 10 ; i++) {
        printf(" | ");
        printf("%c", fileira[i]);
        for (j = 0; j < 10 ; j++) {
            printf(" | ");
            printf("%c", poltrona[i][j]);
        }
        printf("  |\n");
        mostraLinha();    
   }
}
