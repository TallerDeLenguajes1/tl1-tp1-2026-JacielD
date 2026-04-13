#include <stdio.h>

void NumeroCuadrado(int n) {
    int resultado = n * n;
    printf("El cuadrado de %d es %d\n", n, resultado);
}

void Invertir(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Orden (int *x, int *y) {
    if (*x > *y) {
        printf("El valor de a es mayor que el valor de b\n");
        printf("El valor de a es: %d\n", *x);
        printf("El valor de b es: %d\n", *y);
    }else if (*x < *y) {
        printf("El valor de b es mayor que el valor de a\n");
        printf("El valor de a es: %d\n", *x);
        printf("El valor de b es: %d\n", *y);
    } else {
        printf("Los valores son iguales\n");
    }
}
int main() {
    
    int a = 5;
    int b = 10;

    NumeroCuadrado(a);

    printf("El valor de a es: %d\n", a);
    printf("La Direccion De Memoria de a es: %p\n", &a);

    Invertir(&a, &b);



    return 0;
}