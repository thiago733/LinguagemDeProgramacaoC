#include <stdio.h>
int main() {
    //Operador de endereço: &
    //Operador de conteúdo ou dereferenciação: *

    int age = 50;
    int *idade = &age; //declaração de uma variável inteira do tipo ponteiro.
    // & é operador de endereco sendo assim passa o endereco do AGE 
    // para o Conteudo (operador *) do ponteiro (idade);
    // a variavel idade tem o seu endereco e neste endereco está o endereco da variavel AGE.
 
    *idade = age;
    // Estou pegando o valor do AGE (50) e dizendo para o ponteiro (idade) pegar esse valor
    // e atualizar no endereço que ele tem que é o endereço do próprio AGE. Ou seja, seria
    // substituir o 50 pelo 50;
    printf("\n- - - - -  Mostrando informaçoes do AGE - - - - -");
    printf("\nValor do AGE: %i", age);
    printf("\no valor do AGE convertido para hexa por causa do perc x: %x", age);
    printf("\nEndereço usando o perc x do AGE: %x", &age);
    printf("\nEndereço usando o perc p do AGE: %p", &age);
    printf("\n\n- - - - -  Mostrando informaçoes do ponteiro - - - - -");
    printf("\nMostra o conteúdo de AGE: %i", *idade);
    printf("\nMostra o endereço alocado para o ponteiro: %x", &idade);
    printf("\nMostra o endereco que o ponteiro está armazenando: %p", idade);
}
