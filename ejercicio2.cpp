#include <iostream>
using namespace std;

int main() {
    int calificacion;

    // Leer la calificación por teclado
    cout << "Ingrese la calificación: ";
    cin >> calificacion;

    // Verificar y mostrar el mensaje correspondiente
    if (calificacion < 0 || calificacion > 10) {
        cout << "Error" << endl;
    } else if (calificacion == 10) {
        cout << "Excelente" << endl;
    } else if (calificacion == 9) {
        cout << "Muy bien" << endl;
    } else if (calificacion == 8) {
        cout << "Bien" << endl;
    } else if (calificacion == 7) {
        cout << "Regular" << endl;
    } else {
        cout << "No acreditado" << endl;
    }

    return 0;
}
