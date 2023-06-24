#include <stdio.h>
#include <string.h> 
int main() {
    char nome[10] = "Pedro", *ptr;
    int numeros[5] = {4, 5, 1, 2, 4};
    int *ptrInt;
    ptr = nome;  
    ptrInt = numeros;
    printf("\nendereco %p - Conteúdo %c", ptr, *ptr);
    for (int i = 0; i < strlen(nome) ; i++){
        printf("\nLetra do vetor %i: %c - letra pelo ponteiro: %c", i, nome[i], *ptr);
        ptr++;
    }
    printf("\n");
    printf("\nendereco %p - Conteúdo %c", ptr, *ptrInt);
    for (int i = 0; i < 5 ; i++){
        printf("\nNúmero do vetor %i: %i - número pelo ponteiro: %d", i, numeros[i], *ptrInt);
        ptrInt++;
    }
    return(0);   
}

