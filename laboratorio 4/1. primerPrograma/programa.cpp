#include "iostream"

using namespace std;

int main()
{   
    //variables
    int num1;
    int num2;
    //input - output
    cout << "Programa que verifica si un numero es divisible entre otro" << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    //proceso
    if (num1 % num2 == 0) {
        cout << "Los numeros son divisibles" << endl;
    } else {
        cout << "Los numeros no son divisibles" << endl;
    }

    return 0;
}