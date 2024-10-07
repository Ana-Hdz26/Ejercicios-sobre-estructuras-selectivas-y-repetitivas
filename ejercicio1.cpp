#include <iostream>
using namespace std;

int main() {
    int numero;

    // Leer el número por teclado
    cout << "Ingrese el número a evaluar: ";
    cin >> numero;

    // Determinar si es par o impar y mostrar el resultado
    if (numero % 2 == 0) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    return 0;
}
