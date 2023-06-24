#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int mes;
    char *nomeMes[] = {"janeiro", "fevereiro", "março", "abril", 
                        "maio", "junho", "julho", "agosto", "setembro", 
                        "outubro", "novembro", "dezembro"};
  // valida se foram passados os 4 parametros
  // 1-nome do programa (índice 0), 2-dia, 3-mes e o 4-ano 
    if(argc == 4) {
        // verifica se o mês informado é válido
        if (atoi(argv[1]) < 1 || atoi(argv[1]) > 31) {
          printf("\nAtenção: dia informado está incorreto.");
        } else if (atoi(argv[2]) < 1 || atoi(argv[2]) > 12) {
          printf("\nAtenção: mês informado está incorreto.");
        } else if (atoi(argv[3]) < 1900 || atoi(argv[3]) > 2100) {
          printf("\nAtenção: ano informado está incorreto.");
        } else {
          mes = atoi(argv[2]);
          printf("\n%s de %s de %s", argv[1], nomeMes[mes-1], argv[3]);
        }
    } else {
        printf("Atenção: você deve informar o dia, mês e ano!\n");
    }
    return (0);
}

