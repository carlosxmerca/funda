#include "iostream"
#include "string"

using namespace std;
bool bisiesto(int); 
void evaluarErrorEnDatos(int, int, int);
bool evaluarDatos(int, int, int);
bool evaluarDias(int, int, bool);
string fechaToString(int, int, int, bool);

int main()
{   
    //variables
    int dd, mm, aa;
    string fecha;
    //input - output
    cout << "Programa que indica la fecha del dia sigueinte." << endl;
    cout << "Ingrese el valor de dia (dd): " << endl;
    cin >> dd;
    cout << "Ingrese el valor del mes (mm): " << endl;
    cin >> mm;
    cout << "Ingrese el valor del año (aa): " << endl;
    cin >> aa;
    //proceso
    if (bisiesto(aa)) {
        //El ano es bisiesto.
        if (evaluarDatos(dd, mm, aa)) {
            //segunda evalucacion
            if (evaluarDias(dd, mm, true)) {
                fecha = fecha = fechaToString(dd, mm, aa, true);
                cout << "La fecha del dia de manana sera: " << fecha << endl; 
            } else {
                cout << "El dia no corresponse al mes seleccionado" << endl; 
            }
        }else{
            evaluarErrorEnDatos(dd, mm, aa);
        }
    } else {
        //El ano no es bisiesto.
        if (evaluarDatos(dd, mm, aa)) {
            //segunda evalucacion
            if (evaluarDias(dd, mm, false)) {
                fecha = fechaToString(dd, mm, aa, false);
                cout << "La fecha del dia de manana sera: " << fecha << endl; 
            } else {
                cout << "El dia no corresponse al mes seleccionado" << endl; 
            } 
        } else {
            evaluarErrorEnDatos(dd, mm, aa);
        }
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

bool evaluarDatos(int dd, int mm, int aa) {
    if (aa != 0) {
        if (mm != 0 || mm <= 12) {
            if (dd <= 31) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}

void evaluarErrorEnDatos(int dd, int mm, int aa) {
    if (aa != 0) {
        //
    } else {
        cout << "El ano no es valido." << endl;
    }
    if (mm != 0 || mm <= 12) {
        //
    } else {
        cout << "El mes no es valido." << endl;
    }
    if (dd <= 31) {
        //
    } else {
        cout << "El dia no es valido." << endl;
    }

    cout << "Por favor intentelo de nuevo con otros valores." << endl;
}

bool evaluarDias(int dd, int mm, bool bis) {
    if (bis) {
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
            return true;
        } else if (mm == 2 && dd <= 29) {
            return true;
        } else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd <= 30) {
            return true;
        } else {
            return false;
        }
    } else {
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
            return true;
        } else if (mm == 2 && dd <= 28) {
            return true;
        } else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd <= 30) {
            return true;
        } else {
            return false;
        }
    }
}

string fechaToString(int dd, int mm, int aa, bool bis) {
    string dd_str, mm_str, aa_str, str;
    if (bis) {
        if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10) && dd == 31) {
            mm += 1;
            dd = 1;
        } else if (mm == 2 && dd == 29) {
            mm += 1;
            dd = 1;
        } else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd == 30) {
            mm += 1;
            dd = 1;
        } else if (mm == 12 && dd == 31) {
            aa += 1;
            mm = 1;
            dd = 1;
        } else {
            dd += 1;
        }
    } else {
       if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10) && dd == 31) {
            mm += 1;
            dd = 1;
        } else if (mm == 2 && dd == 28) {
            mm += 1;
            dd = 1;
        } else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd == 30) {
            mm += 1;
            dd = 1;
        } else if (mm == 12 && dd == 31) {
            aa += 1;
            mm = 1;
            dd = 1;
        } else {
            dd += 1;
        }
    }
    dd_str = to_string(dd);
    mm_str = to_string(mm);
    aa_str = to_string(aa);
    //fecha de manana
    str = dd_str + "/" + mm_str + "/" + aa_str;
    return str;
}



