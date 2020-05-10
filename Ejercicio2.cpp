#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    double radio;
    double perimetro, area;
    double pi = 3.1416;
    
    cout << "****calcular area y perimetro de un circulo****";
    
    cout << "\n\nIngrese el area: ";
    cin >> radio;

    area = pi * pow(radio,2);
    perimetro = 2 * pi * radio;

    cout << "\n\nEl area de el circulo es: " << + area;
    cout << "\nEl perimetro de el circulo es: " << + perimetro;
    cout << "\n\n";
    
    system("pause");


}