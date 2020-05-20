#include "iostream"
#include "cmath"

using namespace std;

int main()
{   
    //variables
    int num;
    //input 
    cout << "Programa que  que verifica si un numero es positivo, negativo o cero. " << endl;
    cout << "Ingrese el numero a verificar: " << endl;
    cin >> num;
    //proceso
    if (num > 0) {
        cout << "El numero es positivo" << endl;
    } else if (num < 0) {
        cout << "El numero es negativo" << endl;
    } else {
        cout << "El numero es igual a cero" << endl;
    }
    
    return 0;
}
