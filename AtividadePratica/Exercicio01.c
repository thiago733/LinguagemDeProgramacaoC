#include <stdio.h>
int main () {
    char nome[50];
    int registroUnico;
    int anoAtual = 2023;
    int ultimoDigitoDoAnoAtual = anoAtual % 10;

    printf ("Insira seu nome: ");
    fgets (nome, 50, stdin);
    printf ("Insira seu RU: ");
    scanf ("%d", &registroUnico);
    int ultimoDigitoDoRegistroUnico = registroUnico % 10;
    if (ultimoDigitoDoRegistroUnico == ultimoDigitoDoAnoAtual)
        printf ("Aluno %s, seu RU está autenticado.\n", nome);
    else
        printf ("Aluno %s, seu RU não está autenticado.\n", nome);

    return 0;
}