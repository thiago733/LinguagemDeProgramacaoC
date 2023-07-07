#include <stdio.h>
//Calculando a média das notas inseridas
float calcularMedia(float notas[], int tamanho) {
    float somaDasNotas;
    for (int contador = 0; contador < tamanho; contador++) {
        somaDasNotas += notas[contador];
    }
    return somaDasNotas / tamanho;
}

int main() {
    //Declarando as variáveis
    int numeroDeNotas;
    //Inserindo as notas
    printf("Digite o número de notas que serão inseridas: ");
    scanf("%d", &numeroDeNotas);
    float notas[numeroDeNotas];
    printf("Digite as notas separadas por espaços: ");
    for (int contador = 0; contador < numeroDeNotas; contador++) {
        scanf("%f", &notas[contador]);
    }
    //Imprimindo o resultado da média
    float media = calcularMedia(notas, numeroDeNotas);
    printf("A média das notas é: %.1f\n", media);
    return 0;
}
