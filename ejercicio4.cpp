#include <iostream>
using namespace std;

int main() {
    int n, cantidad, precio, total = 0;

    cout << "Ingrese la cantidad de artículos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Artículo " << i << " cantidad: ";
        cin >> cantidad;

        cout << "Artículo " << i << " precio: ";
        cin >> precio;

        total += cantidad * precio;
    }

    cout << "\nTotal a pagar: $" << total << endl;

    return 0;
}
