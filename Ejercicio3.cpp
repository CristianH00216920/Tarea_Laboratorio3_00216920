#include "iostream"
#include "math.h"
using namespace std;

int main()
{

    int a,b,c;
    float x1,x2;

    cout << "Calculo ecuacion cuadratica";

    cout << "\n\nDigite el valor de a: "; cin >> a;
    cout << "Digite el valor de b: "; cin >> b;
    cout << "Digite el valor de c: "; cin >> c;

    if (a != 0)
    {
        
        x1 = (-b +(sqrt(b*b-4*a*c)))/(2*a);
        x2 = (-b -(sqrt(b*b-4*a*c)))/(2*a);


        cout << "\n\nla respuesta es: ";
        cout << "\nx1 = " << + x1;
        cout << "\nx2 = " << + x2;

        cout << "\n\n";
        system("pause");
    
    }else

    {
        cout << "\n\nEl coheficiente debe ser diferente de cero: " << endl;
        system("pause");
    }
    
}