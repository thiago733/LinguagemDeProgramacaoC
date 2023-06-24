#include <stdio.h>

enum trabalho {matutino = 1, vespertino, noturno} turno;

main() {
    printf("\nTurnos disponíveis:\n");
    printf("1 - Matutino\n2 - Vespertino\n3 - Noturno\n");
    printf("\nInforme o turno: ");
    scanf (" %d", &turno);

    if (turno == 1) {
        printf("\nTurno escolhido: Matutino.");
    }
    else if (turno == 2) {
        printf("\nTurno escolhido: Vespertino.");
    }
    else {
        printf("\nTurno escolhido: Noturno.");
    }
    
    return(0);
}