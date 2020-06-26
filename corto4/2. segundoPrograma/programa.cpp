#include "iostream"
#include "cmath"

using namespace std;
float leerArray(int, float arr []);
void recorrerArray(int x, float arr []);
float promedioArray(int, float arr []);
int arribaMedia(int, float, float arr []);
int abajoMedia(int, float, float arr []);

int main()
{   
    //variables
    int n, x;
    float prom;
    //input - output
    cout << "programa que mide la media de estatura de un grupo de estudiantes." << endl;
    cout << "Ingrese el numero total de estudiantes (recomendado 25): " << endl;
    cin >> n; 
    if (n <= 25 && n > 0) {
        float arr [n];
        //proceso
        leerArray(n, arr);
        x = sizeof(arr) / sizeof(arr [0]);
        prom = promedioArray(x, arr);
        cout << "----------" << endl;
        cout << "El promedio de estatura es: " << prom << " cm." << endl;
        cout << "Estudiantes arriba de la media: " << arribaMedia(x, prom, arr) << endl;
        cout << "Estudiantes abajo de la media: " << abajoMedia(x, prom, arr) << endl;
    } else {
        cout << "Numero de elementos a evaluar debe ser menor o igual a 25 y mayor que 0." << endl;
    }

    return 0;
}

float leerArray(int n, float arr []) {
    float aux;
    for(int i = 0; i < n; i++) {
        int n = i + 1;
        cout << "Ingrese la estatura del estudante " << n << " (en cm) : " << endl;
        cin >> aux;
        if (aux >= 0) {
            arr [i] = aux;
        } else {
            cout << "Ingrese una estatura mayor a 0." << endl;
            i--;
        }
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

int arribaMedia(int x, float prom, float arr []) {
    int aux = 0;
    for(int i = 0; i < x; i++) {
       if (arr [i] > prom) {
            aux++;
       }
    }

    return aux;
}

int abajoMedia(int x, float prom, float arr []) {
    int aux = 0;
    for(int i = 0; i < x; i++) {
       if (arr [i] < prom) {
            aux++;
       }
    }

    return aux;
}
