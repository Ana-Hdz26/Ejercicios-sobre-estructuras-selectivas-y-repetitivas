#include <stdio.h>

int main() {
    int calificacion;

    // Leer la calificación por teclado
    printf("Ingrese la calificación: ");
    scanf("%d", &calificacion);

    // Verificar y mostrar el mensaje correspondiente
    if (calificacion < 0 || calificacion > 10) {
        printf("Error\n");
    } else if (calificacion == 10) {
        printf("Excelente\n");
    } else if (calificacion == 9) {
        printf("Muy bien\n");
    } else if (calificacion == 8) {
        printf("Bien\n");
    } else if (calificacion == 7) {
        printf("Regular\n");
    } else {
        printf("No acreditado\n");
    }

    return 0;
}