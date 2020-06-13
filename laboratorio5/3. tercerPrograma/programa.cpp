#include "iostream"

using namespace std;
bool bisiesto(int);

int main()
{   
    //variables
    int num;
    //input - output
    cout << "Programa que indica si un año es bisiesto o no" << endl;
    cout << "Ingrese el año: " << endl;
    cin >> num;
    //proceso
    if (bisiesto(num)) {
        cout << "El año es bisiesto." << endl;
    } else {
        cout << "El año no es bisiesto." << endl;
    }

    return 0;
}

bool bisiesto(int num) {
    if (num % 400 == 0) {
        return true;
    } else if (num % 4 == 0 && num % 100 !=0) {
        return true;
    } else {
        return false;
    }   
}