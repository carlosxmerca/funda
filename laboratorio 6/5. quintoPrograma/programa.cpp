#include "iostream"

using namespace std;
int leerArray100(int, int arr []);
void recorrerArray(int x, int arr []);

int main()
{   
    //variables
    int n = 100;
    int arr [n];
    //input - output
    cout << "Programa que llena un arreglo con los 100 primeros numeros enteros impares y los muestre en forma descendente." << endl;  
    leerArray100(n, arr);
    cout << "Valores del arreglo en orden descendente." << endl; 
    cout << "------" << endl; 
    recorrerArray(n, arr);
    return 0;
}

int leerArray100(int n, int arr []) {
    int x;
    for (int i = 1; i <= n; i++) {
        x = (2*i) - 1;
        arr [i - 1] = x;
    }

    return arr [0];
}

void recorrerArray(int n, int arr []) {
    n--;
    for(int i = n; i >= 0; i--) {
        cout << arr [i] << endl;
    }
}


