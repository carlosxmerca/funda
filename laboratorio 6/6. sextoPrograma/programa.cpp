#include "iostream"

using namespace std;
int leerArray(int, int arr []);
void recorrerArray(int, int arr []);
int coincidencias(int, int, int arr []);

int main()
{   
    //variables
    int n, x, num, coin;
    //input - output
    cout << "programa que solicita un arreglo al usuario y luego determina cunatas veces se repie un numero en el arreglo." << endl;
    cout << "Ingrese el numero total de elementos del arreglo: " << endl;
    cin >> n; 
    if (n <= 10 && n > 0) {
        int arr [n];
        //proceso
        cout << "Ingrese los valores del arreglo: " << endl;
        cout << "-----" << endl;
        leerArray(n, arr);
        cout << "-----" << endl;
        cout << "Ingrese el numero a buscar: " << endl;
        cin >> num; 
        cout << "-----" << endl;
        x = sizeof(arr) / sizeof(arr [0]);
        coin = coincidencias(x, num, arr);
        cout << "El numero de coincidencias es: " << coin << endl;
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

int coincidencias(int x, int num, int arr []) {
    int matchs = 0;
    for (int i = 0; i < x; i++) {
        if (arr [i] ==  num) {
            matchs++;
        }
    }

    return matchs;
}

