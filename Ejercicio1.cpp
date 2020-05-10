#include "iostream"
#include "iomanip"
using namespace std;



int main()
{
   

    double n1,n2,n3;
    double promedio;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "\nIngrese el segundo numero: ";
    cin >> n2;

    cout << "\nIngrese el tercer numero: ";
    cin >> n3;

    promedio = (n1+n2+n3)/3;

    cout << fixed << setprecision(2) << promedio;
    cout << "\nEl promedio es: " << + promedio ;
    cout << "\n\n";

    system("pause");

}
