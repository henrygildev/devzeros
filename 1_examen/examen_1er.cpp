#include <iostream>
using namespace std;

int main(){
    int evaluacionAnual;
    int inaceptable = 0.0;
    int aceptable = 0.4;
    int meritorio = 0.6;

    // Captura de datos del empleado
    cout << "Por favor ingrese la evaluacion del empleado" << endl;
    cout << "1. 0.0" << endl;
    cout << "2. 0.4" << endl;
    cout << "3. 0.6" << endl;
    cin >> evaluacionAnual;

    // Calculo de beneficio del empleado
    inaceptable = 2400 * 0.0;
    aceptable = 2400 * 0.4;
    meritorio = 2400 * 0.6;

    // Switch
    switch(evaluacionAnual)
{
    case 1: cout << "La calificacion del empleado es inaceptable y el beneficio de desempeno es " <<  inaceptable << endl;
    break;
    case 2: cout << "La calificacion del empleado es inaceptable y el beneficio de desempeno es " <<  aceptable << endl;
    break;
    case 3: cout << "La calificacion del empleado es inaceptable y el beneficio de desempeno es " <<  meritorio << endl;
    break;
    default: cout << "Usted ha ingresado una opción incorrecta";
}
    return 0;
}