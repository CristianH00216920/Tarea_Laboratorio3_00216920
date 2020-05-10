#include "iostream"
using namespace std;

int main()
{
    string nombre;
    double cantidad, precio,total;

    cout << "Ingresa el nombre del producto: ";
    cin >> nombre;

    cout << "Ingresa el precio del producto: ";
    cin >> precio;

    cout << "Ingresa la cantidad a comprar: ";
    cin >> cantidad;

    total = precio * cantidad;

    cout << "\n\nProducto: " + nombre << "\nPrecio: $" <<  + precio << "\ncantidad comprada: " << + cantidad 
    << "\n\nTotal de compra: $" << +total;
    

    cout << "\n\n";
    system("pause");






}