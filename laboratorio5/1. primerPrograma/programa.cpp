#include "iostream"

using namespace std;
int calcularMCD(int, int);

int main()
{   
    //variables
    int num1, num2, mcd_out;
    //input - output
    cout << "Elabore una funcion que retorne el mcd de dos numeros que se le proporcionen como argumento." << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    //proceso
    mcd_out = calcularMCD(num1, num2);
    cout << "El MCD es: " << mcd_out << endl;

    return 0;
}

int calcularMCD(int num1, int num2) {
    int residuo, mcd;
    bool finished = false;
    do{
        if (num1 == 0) {
            mcd = num2;
            finished = true;
        } else if (num2 == 0) {
            mcd = num1;
            finished = true;
        } else {
            residuo = num1 % num2;
            num1 = num2;
            num2 = residuo;
        }
    }while(!finished);

    return mcd;
}