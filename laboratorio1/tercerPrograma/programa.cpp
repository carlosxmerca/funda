#include "iostream"
#include "cmath"

using namespace std;

int main()
{   
    //variables
    int a, b, c;
    float x1, x2, discriminante;
    //input 
    cout << "Programa que devuelve el resultado de la formula cuadratica" << endl;
    cout << "Ingrese el valor de a: " << endl;
    cin >> a;
    cout << "Ingrese el valor de b: " << endl;
    cin >> b;
    cout << "Ingrese el valor de c: " << endl;
    cin >> c;
    //validar
    discriminante = (b*b - (4*a*c));
    if (discriminante < 0) {
        cout << "No existen raices. (discriminante negativo)" <<  endl;
    }else{
        //proceso 
        x1 = ( -(b) + sqrt(b*b - (4*a*c)) ) / (2*a);
        x2 = ( -(b) - sqrt(b*b - (4*a*c)) ) / (2*a);
        //output
        cout << "Los valores son X1: " << x1 << " X2: " << x2 << endl;
    }
    
    return 0;
}
