#include "iostream"
#include "cmath"

using namespace std;
float leerArray(int, float arr []);
void recorrerArray(int x, float arr []);
float promedioArray(int, float arr []);
float sumaxiArray(int, float, float arr []);
float incertezaArray(int, float);

int main()
{   
    //variables
    int n, x;
    float sumaxi, incerteza, prom;
    //input - output
    cout << "programa que mide la incerteza en base a las medidas brindadas por el usuario." << endl;
    cout << "Ingrese el numero total de medidas: " << endl;
    cin >> n; 
    if (n <= 10 && n > 0) {
        float arr [n];
        //proceso
        leerArray(n, arr);
        x = sizeof(arr) / sizeof(arr [0]);
        prom = promedioArray(x, arr);
        sumaxi = sumaxiArray(x, prom, arr);
        incerteza = incertezaArray(x, sumaxi);
        cout << "La incerteza de las medidas ingresadas es: " << incerteza << endl;
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

float promedioArray(int x, float arr []) {
    float prom, aux = 0, n = x * 1.00;
    for(int i = 0; i < x; i++) {
        aux += arr [i];
    }
    prom = aux / n;

    return prom;
}

float sumaxiArray(int x, float prom, float arr []) {
    float aux = 0, val;
    for(int i = 0; i < x; i++) {
        val = arr [i] - prom;
        aux += pow(val, 2);
    }

    return aux;
}

float incertezaArray(int x, float sumaxi) {
    float res;
    res = sumaxi / (x-1);
    res = sqrt(res);

    return res;
}
