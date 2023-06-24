//Código em C
#include <stdio.h>

int main() {
    float n1=0, n2=0, media=0;  
    printf ("\nDigite a 1ª Nota: ");
    scanf ("%f", &n1);     
    printf ("\nDigite a 2ª Nota: ");     
    scanf ("%f", &n2);    

    media = (n1 + n2)/2;
    
    printf ("\nMédia final: %.2f", media) ;

    if	(media >= 7) {
    printf ("\nAPROVADO\n");
    } else { 
        if 	(media < 4) {
            printf ("\nREPROVADO\n");
        } else {
            printf ("\nEM EXAME\n");
        }
    }

    int idade = 20;
    idade < 18 ? printf("Menor") : printf("Maior");

    return (0);
}

