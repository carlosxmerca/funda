#include "iostream"
#include "string"

using namespace std;

int main()
{   
    //variables
    string palabra;
    //input
    cout << "Programa que verifica si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar." << endl;
    cout << "Ingrese la palabra a verificar: " << endl;
    cin >> palabra;
    //proceso 
    if (palabra.length() > 10) {
        cout << "Palabra con mas de 10 caracteres" << endl;
    } else {
        cout << "Palabra con 10 caracteres o menos" << endl;
    }
    //
    if (palabra.length() % 2 == 0) {
        cout << "La longuitud de la palabra es par" << endl;
    } else {
        cout << "La longuitud de la palabra es impar" << endl;
    }

    return 0;
}