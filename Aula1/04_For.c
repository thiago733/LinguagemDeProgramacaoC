// Comando de repetição For
#include <stdio.h>
int main() {
    int i = 0;
    int x, y;
    for(i=1 ; i<4 ; i++) {
        printf ("\n%d", i);
    }

    for(x=0, y=1; x<3 && y<4; x++, y++){
        printf("\nnumero pertencente a x: %d", x);  
        printf("\nnumero pertencente a y: %d", y);  
    }
}

