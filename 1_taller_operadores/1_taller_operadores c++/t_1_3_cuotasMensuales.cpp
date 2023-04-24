/* Escribe un pseudocódigo que pida al usuario el valor de un préstamo, el interés y el plazo en meses. 
Calcula el valor de las cuotas mensuales y muestre en pantalla. */
#include <iostream>
using namespace std;

int main(){
    // Declaracion de variables
    int valorPrestamo, valorTotal, valorFinal;
    float interesPrestamo, totalDeuda, totalIntereses;
    int plazoMeses;
    int cuotasMensuales;

    // Captura de datos
    cout << "Por favor ingrese el valor del prestamo" << endl;
    cin >> valorPrestamo;
    cout << "Por favor ingresa el interes mensual del prestamo" << endl;
    cin >> interesPrestamo;
    cout << "Por favor ingresa el plazo del prestamo en meses" << endl;
    cin >> plazoMeses;

    // Calculos del prestamo
    totalDeuda = valorPrestamo * (interesPrestamo/100);
    totalIntereses = totalDeuda * plazoMeses;
    valorTotal = valorPrestamo + totalIntereses;
    cuotasMensuales = valorTotal / plazoMeses;

    cout << "El valor de las cuotas mensuales de su prestamo es: " << cuotasMensuales << endl;

    return 0;
}