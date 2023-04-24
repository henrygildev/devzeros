#include <iostream>
using namespace std;

int main (){
    int edadUsuario;

    // Captura de datos
    cout << "Por favor ingrese su edad" << endl;
    cin >> edadUsuario;
    
    if (edadUsuario >= 18 &&  edadUsuario < 65)
        cout << "Usted es mayor de edad" << endl;
        else
        cout << "No eres un adulto" << endl;

return 0; 

}