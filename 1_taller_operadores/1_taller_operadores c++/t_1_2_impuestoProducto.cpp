#include <iostream>
using namespace std;

int main (){
    int precioProducto;
    int valorImpuesto, valorFinal;

    // Captura de datos
    cout << "por favor ingresa el valor del producto" << endl;
    cin >> precioProducto;
    cout << "Por favor ingresa el impuesto a cobrar sobre el producto" << endl;
    cin >> valorImpuesto;

    // Calculo del impuesto
    valorFinal = precioProducto + (precioProducto * valorImpuesto/100);

    cout << "El valor del producto incluido impuesto es " << valorFinal << endl;

    return 0;
}