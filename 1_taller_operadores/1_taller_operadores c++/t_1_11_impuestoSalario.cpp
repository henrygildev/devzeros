#include <iostream>
using namespace std;

int main(){
    int salarioMensual;

    // Captura de salario
    cout << "Por favor digite su salario mensual" << endl;
    cin >> salarioMensual;

    // Calculo Impuestos

    if (salarioMensual > 9999)
        if (salarioMensual >= 10000 && salarioMensual < 20000)
            cout << "Usted debe pagar 5% de impuestos" << endl;
            else
            if (salarioMensual >= 20000 && salarioMensual < 30000)
                cout << "Usted debe pagar el 10% de impuestos" << endl;
                else
                cout << "Usted debe pagar el 15% de impuestos" << endl;    
    else
        cout << "Usted no debe pagar impuestos" << endl;

return 0;
}