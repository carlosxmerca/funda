#include "iostream"

using namespace std;
float leerMatriz(int, float arr [][5]);
void recorrerMatriz(int x, float arr [][5]);
void valoracionFinal(int x, float arr [][5]);

int main()
{   
    //variables
    int n;
    //input - output
    cout << "programa que calcula la nota final de n estudiantes." << endl;
    cout << "Ingrese el numero total de estudiantes: " << endl;
    cin >> n; 
    if (n <= 25 && n > 0) {
        float arr [n][5];
        //proceso
        leerMatriz(n, arr);
        //recorrerMatriz(n, arr);
        valoracionFinal(n, arr);
    } else {
        cout << "Numero de elementos a evaluar debe ser menor o igual a 25 y mayor que 0." << endl;
    }

    return 0;
}

float leerMatriz(int n, float arr [][5]) {
    float aux;
    for(int i = 0; i < n; i++) {
        int n = i + 1;
        cout << "----------" << endl;
        cout << "Ingrese las notas del estudante " << n << " : " << endl;
        for(int j = 0; j < 5; j++) {
            int m = j + 1;
            cout << "Ingrese la nota del registro " << m << " : " << endl;
            cin >> aux;
            //validar
            if (aux >= 0 && aux <= 10) {
                arr [i][j] = aux;
            } else {
                cout << "Ingrese una nota entre 0 y 10." << endl;
                j--;
            }
        }
    }

    return arr [0][0];
}

void recorrerMatriz(int x, float arr [][5]) {
    for(int i = 0; i < x; i++) {
        int n = i + 1;
        cout << "----------" << endl;
        cout << "Notas del estudiante: " << n << endl;
        for(int j = 0; j < 5; j++) {
            int m = j + 1;
            cout << "Registro " << m << " es : " << arr [i][j] << endl;
        }   
    }
}

void valoracionFinal(int x, float arr [][5]) {
    float aux;
    string res;
    for(int i = 0; i < x; i++) {
        int n = i + 1;
        cout << "----------" << endl;
        cout << "Datos del estudiante: " << n << endl;
        aux = 0;
        for(int j = 0; j < 5; j++) {
            aux += (arr [i][j] * 0.2);
        }   
        //Mostrar resultado final
        cout << "Promedio: " << aux << endl;
        res = (aux >= 7) ? "Aprobado" : "Reprobado";
        cout << res << endl;
    }
}


