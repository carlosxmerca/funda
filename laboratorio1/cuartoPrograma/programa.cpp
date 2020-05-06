#include "iostream"

using namespace std;

int main()
{   
    //variables
    string nombre;
    float precio, precio_total;
    int cantidad;
    //input - output
    cout << "Programa que que reciba 1 producto comprado y muestra el total de dinero gastado." << endl;
    cout << "Ingrese el nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese el precio: " << endl;
    cin >> precio;
    cout << "Ingrese la cantidad: " << endl;
    cin >> cantidad;
    //validar
    if (precio > 0) {
        if (cantidad > 0) {
            //proceso
            precio_total = cantidad * precio;
            cout << "La cantidad total de dinero gastado en " << nombre << " es: " << precio_total << endl;
        }else{
            cout << "Debe ingresar una cantidad valida." << endl;
        }
    }else{
        cout << "Debe ingresar un precio valido." << endl;
    }

    return 0;
}