#include <stdio.h>

int main() {
    int numero;

    // Leer el número por teclado
    printf("Ingrese el número a evaluar: ");
    scanf("%d", &numero);

    // Determinar si es par o impar y mostrar el resultado
    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}
