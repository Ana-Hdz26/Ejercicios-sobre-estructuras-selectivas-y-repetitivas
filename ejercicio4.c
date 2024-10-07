#include <stdio.h>

int main() {
    int n, cantidad, precio, total = 0;

    printf("Ingrese la cantidad de artículos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Artículo %d cantidad: ", i);
        scanf("%d", &cantidad);

        printf("Artículo %d precio: ", i);
        scanf("%d", &precio);

        total += cantidad * precio;
    }

    // Mostrar el total a pagar
    printf("\nTotal a pagar: $%d\n", total);

    return 0;
}
