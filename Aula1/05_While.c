// Comando de repetição While
#include <stdio.h>
int main() {
    int i = 0;
    while(i<4) {
        printf ("\n%d", i);
        i++;
    }

    do {
        printf ("\n%d", i);
        i++;
    } while(i<4);
}

