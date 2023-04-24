#include <iostream>
using namespace std;

int main(){
int valoracionUsuario;

// Captura de dato
cout << "Por favor ingrese una valoracion del 1 al 10" << endl;
cin >> valoracionUsuario;

    if (valoracionUsuario >= 6)
    cout << "Usted aprobo el examen" << endl;
    else
    cout << "Usted reprobo el examen" << endl;
return 0;
}