#include <iostream>
using namespace std;

int main(){
     int edadUsuario;

     // Captura de Datos
     cout << "Por favor digite su edad" << endl;
     cin >> edadUsuario;

     if (edadUsuario >= 18 )
        cout << "Usted es mayor de edad" << endl;
        else
        cout << "Usted es menor de edad" << endl;

    return 0;
}