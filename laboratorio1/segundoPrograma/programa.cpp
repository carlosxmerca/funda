#include "iostream"

using namespace std;

int main()
{   
    //variables
    float radio, area, perimetro;
    //input - output
    cout << "Programa que recibe el radio de un circulo y calcula su area y perimetro. " << endl;
    cout << "Ingrese el valor del radio: " << endl;
    cin >> radio;
    //promedio
    area = 3.1416 * (radio * radio);
    perimetro = 2 * 3.1416 * radio;
    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl;

    return 0;
}