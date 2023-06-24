#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char strDouble[10] = "100.987";
    char strInt[10] = "32345";
    double numeroDouble = 0;
    int numeroInt = 0;
    long numeroLong = 0;
    char *ptr;
    numeroDouble = atof(strDouble);
    numeroInt = atoi(strInt);
    numeroLong = atol(strInt);
    numeroDouble = strtod(strDouble, &ptr);
    numeroInt = strtol(strInt, NULL, 10);
    printf("\nConversão dos valores - strtod / strtol");
    printf("\nString %s para double: %0.5f", strDouble, numeroDouble);
    printf("\nString %s para int: %d", strInt, numeroInt);    
    printf("\nConversão dos valores - atoi / atof / atol");
    printf("\nString %s para double: %0.5f", strDouble, numeroDouble);
    printf("\nString %s para long: %d", strInt, numeroLong);
    printf("\nString %s para int: %d", strInt, numeroInt);
    return (0);
}

