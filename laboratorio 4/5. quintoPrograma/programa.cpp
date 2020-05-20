#include "iostream"
#include "string"

using namespace std;

int main()
{   
    //variables
    string palabra, primer_caracter, ultimo_caracter;
    int size;
    //input
    cout << "Programa que verifica si la palabra ingresada inicia y finaliza con la misma letra." << endl;
    cout << "Ingrese la palabra a verificar: " << endl;
    cin >> palabra;
    //proceso 
    primer_caracter = palabra[0];
    size = palabra.length();
    ultimo_caracter = palabra[size - 1];
    //
    if (primer_caracter == ultimo_caracter) {
        cout << "La palabra inicia y termina con el mismo caracter" << endl;
    } else {
        cout << "La palabra no inicia y termina con el mismo caracter" << endl;
    }

    return 0;
}