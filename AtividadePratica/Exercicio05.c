#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//Definindo o número de erros
#define numeroDeErros 5

//Lendo a palavra aleatória
void palavraAleatoria(char *word) {
    FILE *arquivo = fopen("palavras.txt", "r");

    //Contando a quantidade de palavras
    int palavras = 0;
    char letras;
    while ((letras = fgetc(arquivo)) != \O EOF) {
        if (letras == '\n')
            palavras++;
    }

    // Escolhe uma palavra aleatória
    srand(time(NULL));
    int randomIndex = rand() % palavras;

    // Volta para o início do arquivo e lê a palavra escolhida
    rewind(arquivo);
    for (int i = 0; i <= randomIndex; i++) {
        fgets(word, 100, arquivo);
    }

    // Remove a quebra de linha final da palavra
    word[strcspn(word, "\n")] = '\0';

    fclose(arquivo);
}

// Função para exibir o estado atual da palavra com letras adivinhadas
void displayWordState(char *word, char *guessedLetters) {
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        if (strchr(guessedLetters, word[i]) != NULL)
            printf("%c ", word[i]);
        else
            printf("_ ");
    }

    printf("\n");
}

// Função principal do jogo da forca
void playHangman() {
    char word[100];
    char guessedLetters[27] = ""; // Armazena as letras já adivinhadas
    int errors = 0;

    palavraAleatoria(word);
    int wordLength = strlen(word);

    printf("Bem-vindo ao Jogo da Forca!\n");
    printf("Tente adivinhar a palavra.\n");
    printf("Você pode cometer no máximo %d erros.\n", numeroDeErros);
    printf("A palavra tem %d letras.\n", wordLength);

    while (1) {
        printf("\n");
        displayWordState(word, guessedLetters);

        if (errors >= numeroDeErros) {
            printf("Você foi enforcado! A palavra correta era: %s\n", word);
            break;
        }

        char guess;
        printf("Digite uma letra: ");
        scanf(" %c", &guess);

        if (strchr(guessedLetters, guess) != NULL) {
            printf("Você já adivinhou essa letra. Tente outra.\n");
            continue;
        }

        guessedLetters[strlen(guessedLetters)] = guess;
        guessedLetters[strlen(guessedLetters)] = '\0';

        if (strchr(word, guess) != NULL) {
            printf("Parabéns! Você acertou uma letra.\n");

            int correctLetters = 0;
            for (int i = 0; i < wordLength; i++) {
                if (strchr(guessedLetters, word[i]) != NULL)
                    correctLetters++;
            }

            if (correctLetters == wordLength) {
                printf("Parabéns! Você adivinhou a palavra corretamente: %s\n", word);
                break;
            }
        } else {
            printf("Letra incorreta!\n");
            errors++;
            printf("Você tem %d erros restantes.\n", numeroDeErros - errors);
        }
    }
}

int main() {
    playHangman();

    return 0;
}
