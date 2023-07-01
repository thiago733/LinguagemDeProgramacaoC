#include <stdio.h>
int main () {
    char nome[50];
    int registroUnico;
    printf ("Insira seu nome: ");
    fgets (nome, 50, stdin);
    printf ("Insira seu RU: ");
    scanf ("%i", &registroUnico);
    printf ("Seu RU é: %i", registroUnico);
    
    return 0;

}