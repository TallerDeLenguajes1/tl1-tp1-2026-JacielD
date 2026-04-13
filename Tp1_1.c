#include <stdio.h>

int main(){

    printf("Hola Mundo!\n");

    int Variable = 10;
    int *Puntero = &Variable;

    printf("Valor de la variable: %d\n", Variable);
    printf("Dirección de la variable: %p\n", &Variable);
    printf("Valor al que apunta el puntero: %d\n", *Puntero);
    printf("Tamaño De Memoria: %p\n", sizeof(&Variable));

    return 0;
}
