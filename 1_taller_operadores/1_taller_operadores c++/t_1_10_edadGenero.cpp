#include <iostream>
using namespace std;

int main(){
    int edadUsuario;
    char generoUsuario;

    // Captura de datos

    cout << "Por favor digita tu edad" << endl;
    cin >> edadUsuario;
    cout << "Por favor digita tu genero" << endl;
    cout << "m si es masculino" << endl;
    cout << "f si es femenino" << endl;
    cin >> generoUsuario;

    // Condicional de verificacion
    if (edadUsuario < 18)
        cout << "Eres menor de Edad" << endl;
    else
        if (generoUsuario == 'f' && edadUsuario >=18)
        cout << "Eres una mujer adulta" << endl;
        else
        cout << "Eres un hombre adulto" << endl;

return 0;
}