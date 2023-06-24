#include <stdio.h>
int main() {
    char nome[5] = {'J', 'o', 'a', 'o' }; 
    //char nome[5] = "Joao";
    printf(nome);
    char livro[30]; 
    printf ("\nInforme o nome do livro: ");
    scanf   (" %s", livro); 
    printf ("\nO nome do livro é %s ", livro);  
    printf("\n\n");
    char nome[30]; 
    char func[30]; 
    printf ("\nInforme o nome do funcionário: ");
    gets   (func); 
    strcpy (nome, func);  
    printf ("O nome do(a) funcionário(a) é %s ", nome);  
    return(0);
}

