#include <iostream>
using namespace std;

int main() {
    string letraUsuario;

    // Captura de Dato
    cout << "Por favor digita una letra" << endl;
    cin >> letraUsuario;

    if (letraUsuario == "a" || letraUsuario == "e" || letraUsuario == "i" || letraUsuario == "o" || letraUsuario == "u")
        cout << "la letra es una vocal" << endl;
    else 
        cout << "La letra es una consonante" << endl;

    return 0;
}
