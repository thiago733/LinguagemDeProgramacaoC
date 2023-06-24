//Código em C
#include <stdio.h>

int main() {
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

