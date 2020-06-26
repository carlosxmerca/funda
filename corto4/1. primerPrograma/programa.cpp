#include "iostream"
#include "string"

using namespace std;
char cifrar(int, string);

int main()
{   
    //variables
    string frase, cifrado;
    char str[100];
    //input - output
    cout << "programa que codifica usando la clave del murcielago." << endl;
    cout << "-------- " << endl;
    cout << "Ingrese la frase a codificar: " << endl;
    cin.getline(str, 100, '\n');
    frase = str;
    //proceso
    for(int i = 0; i < frase.length(); i++) {
        cifrado = cifrado + cifrar(i, frase);
    }
    cout << "-------- " << endl;
    cout << "La frase introducida es: " << frase << endl;
    cout << "La frase cifrada es: " << cifrado << endl;

    return 0;
}

char cifrar(int i, string frase) {
    char aux = frase[i];
    //claves
    char clave1 [10] = {'m', 'u', 'r', 'c', 'i', 'e', 'l', 'a', 'g', 'o'};
    char clave2 [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    //proceso de cifrado
    for (int j = 0; j < 10; j++) {
        if (aux == clave1 [j]) {
            return clave2 [j];
        }
    }

    return aux;
}