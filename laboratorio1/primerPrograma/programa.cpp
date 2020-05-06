#include "iostream"

using namespace std;

int main()
{   
    //variables
    int num1;
    int num2;
    int num3;
    float prom;
    //input - output
    cout << "Programa que devuelve el promedio de 3 nuemros enteros" << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> num3;
    //promedio
    prom = (num1 + num2 + num3) / 3;
    cout << "El promedio es: " << prom << endl;

    return 0;
}