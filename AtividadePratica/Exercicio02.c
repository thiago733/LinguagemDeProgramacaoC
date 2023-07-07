#include <stdio.h>
//Declaração da estrutura Aluno
struct Aluno{
    char nome[50];
    float nota;
} aluno;

int main () {
    //Declarando e inicializando variáveis
    int registroUnico;

    //Colentando os dados do aluno
    printf ("Insira seu nome: ");
    fgets (aluno.nome, 50, stdin);
    printf ("Insira a nota da prova: ");
    scanf ("%f", &aluno.nota);
    printf ("Insira o seu RU: ");
    scanf ("%d", &registroUnico);
    //Procesando o RU para obter o primeiro dígito
    int primeiroDigitoDoRegistroUnico = registroUnico;
    while (primeiroDigitoDoRegistroUnico >= 10) {
        primeiroDigitoDoRegistroUnico = primeiroDigitoDoRegistroUnico / 10;
    }
    //Calculando a média final
    float mediaFinal = (aluno.nota + primeiroDigitoDoRegistroUnico) / 2;
    printf ("Aluno %s, sua média final é: %.1f\n", aluno.nome, mediaFinal);

    return 0;
}