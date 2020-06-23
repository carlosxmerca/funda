#include "iostream"

using namespace std;
int leerArray(int, int arr []);
void recorrerArray(int, int arr []);

int main()
{   
    //variables
    int n, x;
    //input - output
    cout << "programa que solicita al usuario cierta cantidad de numeros enteros y estos se almacenen en un arreglo." << endl;
    cout << "Ingrese el numero de elementos del arreglo: " << endl;
    cin >> n; 
    if (n <= 10 && n > 0) {
        int arr [n];
        //proceso
        leerArray(n, arr);
        //x = *(&arr + 1) - arr;
        x = sizeof(arr) / sizeof(arr [0]);
        recorrerArray(x, arr);
    } else {
        cout << "Numero de elementos a evaluar debe ser menor a 10 y mayor que 0." << endl;
    }

    return 0;
}

int leerArray(int n, int arr []) {
    for(int i = 0; i < n; i++) {
        int n = i + 1;
        cout << "Ingrese el valor " << n << " del arreglo: " << endl;
        cin >> arr [i];
    }

    return arr [0];
}


void recorrerArray(int x, int arr []) {
    for(int i = 0; i < x; i++) {
        int n = i + 1;
        cout << "El valor " << n << " del arreglo es : " << arr [i] << endl;
    }
}
