#include "iostream"
#include "string"
#include "time.h"
#include "stdio.h"
#include "stdlib.h"

using namespace std;
string revisarValor(int, int);

int main()
{   
    //variables
    int random_number, num, intentos = 5, intentos_l;
    rand()%100;
    srand (time(NULL));
    random_number = rand()%100;
    string res;
    //Input - Output
    cout << "Programa que crea un numero al azar (magico) del 1 al 100 y el usuario debe adivinarlo." << endl;
    cout << "Cuenta con " << intentos << " intentos ---" << endl;
    cout << "Si desea salir ingrese el numero 0." << endl;
    //Proceso de acuerdo al numero de intentos
    for(int i = 1; i <= intentos; i++) {
        intentos_l = intentos;
        cout << "Ingrese el numero: " << endl;
        cin >> num;
        if (num > 0 && num <= 100) {
            res = revisarValor(random_number, num);
            if (res == "exito") {
                cout << "El valor ingresado es el numero magico." << endl;
                i = intentos;
            } else if (res == "menor") {
                cout << "El valor ingresado es menor al numero magico." << endl;
                cout << "Cuenta con " << intentos_l - i << " intentos ---" << endl;
            } else if (res == "mayor") {
                cout << "El valor ingresado es mayor al numero magico." << endl;
                cout << "Cuenta con " << intentos_l - i << " intentos ---" << endl;
            }
        } else if (num == 0) {
            cout << "Presiono 0 para salir." << endl;
            i = intentos;
        } else {
            cout << "El valor no pertenece al rango (1, 100)." << endl;
            cout << "Cuenta con " << intentos_l - i << " intentos ---" << endl;
        }
    }

    return 0;
}

string revisarValor(int ran, int num) {
    if (ran == num) {
        return "exito";
    } else if (ran > num) {
        return "menor";
    } else {
        return "mayor";
    }
}
