#include "iostream"

using namespace std;

int main()
{   
    //variables
    int num1;
    //input - output
    cout << "Programa que verifica si un numero es par o impar" << endl;
    cout << "Ingrese el numero: " << endl;
    cin >> num1;
    //proceso
    if (num1 == 0) {
        cout << "El numeros es igual a cero" << endl;
    } else {
        if (num1 % 2 == 0) {
            cout << "El numeros es par" << endl;
        } else {
            cout << "El numero es impar" << endl;
        }
    }

    return 0;
}