#include "iostream"
#include "string"

using namespace std;
bool validarValores(int, int, int);
string obtenerHora(int, int, int);
void verErrores(int, int, int);

int main()
{   
    //variables
    int hh, mm , ss;
    string hora;
    //Input - Output
    cout << "Programa que lea la hora en formato (hh, mm, ss) en modo de 24 horas. " << endl;
    cout << "Ingrese el valor de horas (hh): " << endl;
    cin >> hh;
    cout << "Ingrese el valor de minutos (mm): " << endl;
    cin >> mm;
    cout << "Ingrese el valor de segundos (ss): " << endl;
    cin >> ss;
    //Proceso
    if (validarValores(hh, mm, ss)) {
        hora = obtenerHora(hh, mm, ss);
        cout << "La hora acual es: " << hora << endl;
    } else {
        verErrores(hh, mm, ss);
    }

    return 0;
}

bool validarValores(int hh, int mm, int ss) {
    if (hh <= 23) {
        if (mm <= 59) {
            if (ss <= 59) {
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

void verErrores(int hh, int mm, int ss) {
    if (hh <= 23) {
        //
    } else {
        cout << "Valor de horas hh no valido." << endl;
    }
    if (mm <= 59) {
        //      
    } else {
        cout << "Valor de minutos mm no valido." << endl;
    }
    if (ss <= 59) {
        //
    } else {
        cout << "Valor de segundos ss no valido." << endl;
    }

    cout << "Por favor intentelo de nuevo con otros valores." << endl;
}

string obtenerHora(int hh, int mm, int ss) {
    string hh_srt, mm_srt, ss_srt, srt;
    if (ss == 59) {
        if (mm == 59) {
            if (hh == 23) {
                hh = 00;
                mm = 00;
                ss = 00;
            } else {
                hh += 1;
                mm = 00;
                ss = 00;
            }
        } else {
            mm += 1;
            ss = 00;
        }
    } else {
        ss += 1;
    }
    hh_srt = to_string(hh);
    mm_srt = to_string(mm);
    ss_srt = to_string(ss);
    srt = hh_srt + ":" + mm_srt + ":" + ss_srt;

    return srt;
}