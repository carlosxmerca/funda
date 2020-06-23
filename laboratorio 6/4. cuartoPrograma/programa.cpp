#include "iostream"
#include "cmath"

using namespace std;
float leerArray(int, float arr []);
void recorrerArray(int x, float arr []);
float sumaArray(int, float arrA [], float arrB []);

int main()
{   
    //variables
    int n, x;
    float suma;
    //input - output
    cout << "programa que solicita dos arreglos al usuario y crea un tercer arreglo con la suma de los elementos de los arreglos previos." << endl;
    cout << "Ingrese el numero total de elementos de los arreglos: " << endl;
    cin >> n; 
    if (n <= 10 && n > 0) {
        float arrA [n], arrB [n], arrC [n];
        //proceso
        cout << "Ingrese los valores del arreglo A: " << endl;
        cout << "-----" << endl;
        leerArray(n, arrA);
        cout << "-----" << endl;
        cout << "Ingrese los valores del arreglo B: " << endl;
        cout << "-----" << endl;
        leerArray(n, arrB);
        x = sizeof(arrA) / sizeof(arrA [0]);
        for (int i = 0; i < x; i++) {
            suma = sumaArray(i, arrA, arrB);
            arrC [i] = suma;
        }
        cout << "-----" << endl;
        cout << "Los valores del arreglo resultante son: " << endl;
        recorrerArray(x, arrC);
    } else {
        cout << "Numero de elementos a evaluar debe ser menor a 10 y mayor que 0." << endl;
    }

    return 0;
}

float leerArray(int n, float arr []) {
    float aux;
    for(int i = 0; i < n; i++) {
        int n = i + 1;
        cout << "Ingrese el valor " << n << " del arreglo: " << endl;
        cin >> aux;
        arr [i] = aux;
    }

    return arr [0];
}

void recorrerArray(int x, float arr []) {
    for(int i = 0; i < x; i++) {
        int n = i + 1;
        cout << "El valor " << n << " del arreglo es : " << arr [i] << endl;
    }
}

float sumaArray(int x, float arrA [], float arrB []) {
    float aux = 0;
    aux = arrA [x] + arrB [x];

    return aux;
}

