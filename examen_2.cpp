#include <iostream>
using namespace std;

int main(){
    // Declaracion de Variables
    int salarioEmpleado = 0;
    int totalSalario = 0;
    int promedioSalarios = 0;

    for (int i = 0; i < 10; ++i) {
        cout << "Por Favor digita el salario del empleado #: " << i +1 << endl;
        cin >> salarioEmpleado;
        totalSalario = totalSalario + salarioEmpleado;
        }
    cout << "El valor total de los salarios a pagar es: " << totalSalario << endl;

    // Calculo promedio de Salarios
    promedioSalarios = totalSalario / 10;
    cout << "EL promedio de los salarios es: " << promedioSalarios;
        return 0;
    }
