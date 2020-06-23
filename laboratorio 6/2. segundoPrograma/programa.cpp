#include "iostream"

using namespace std;
int leerArray(int, int arr []);
float promedioArray(int, int arr []);

int main()
{   
    //variables
    int n, x;
    float prom;
    //input - output
    cout << "programa que solicita al usuario cierta cantidad de numeros enteros y estos se almacenen en un arreglo, posteriormente devuelve el promedio." << endl;
    cout << "Ingrese el numero de elementos del arreglo: " << endl;
    cin >> n; 
    if (n <= 10 && n > 0) {
        int arr [n];
        //proceso
        leerArray(n, arr);
        x = sizeof(arr) / sizeof(arr [0]);
        prom = promedioArray(x, arr);
        cout << "El promedio de los numeros ingresados es: " << prom << endl;
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


float promedioArray(int x, int arr []) {
    float prom, aux = 0, n = x * 1.00;
    for(int i = 0; i < x; i++) {
        aux = aux + arr [i];
    }
    prom = aux / n;

    return prom;
}
