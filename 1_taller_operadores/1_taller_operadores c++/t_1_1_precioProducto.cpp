#include <iostream>
using namespace std;

int main(){
    int precioProducto;
    int descuentoProducto;
    int valorFinal, valorDescuento;

    // Captura de datos
    cout << "Por favor digite el precio del producto" << endl;
    cin >> precioProducto;
    cout << "Por favor digite el descuento del producto" << endl;
    cin >> descuentoProducto;

    // Calculo de precio
    valorDescuento = precioProducto * descuentoProducto/100;
    valorFinal = precioProducto - valorDescuento;
    cout << "El valor del prodcuto con descuento es " << valorFinal << endl;

    return 0;

}