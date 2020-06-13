#include "iostream"

using namespace std;
float calcularSalarioTotal(float, float);
void calcularDescucentos(float);
bool validarDatos(float, float);

int main()
{   
    //variables
    int numero_empleados;
    float horas_n, horas_e, salario;
    //input - output
    cout << "Programa que calcula salario mensual de empleados." << endl;
    cout << "Ingrese el numero de empleados: " << endl;
    cin >> numero_empleados; 
    if (numero_empleados > 0) {
        //proceso
        for(int i = 1; i <= numero_empleados; i++) {
            cout << "Ingrese el numero de horas normales del empleado " << i << " : " << endl;
            cin >> horas_n;
            cout << "Ingrese el numero de horas extras del empleado " << i << " : " << endl;
            cin >> horas_e;
            if (validarDatos(horas_n, horas_e)) {
                salario = calcularSalarioTotal(horas_n, horas_e);
                cout << "El salario total es: $" << salario << endl;
                //mostrar descuentos y salario neto
                calcularDescucentos(salario);
            } else {
                cout << "Valores no validos" << endl;
                i--;
            }
        }
    } else {
        cout << "Numero de empleados a evaluar no valido" << endl;
    }

    return 0;
}

float calcularSalarioTotal(float horas_n, float horas_e) {
    //constantes
    float hora_n_v = 1.75, hora_e_v = 2.50, salario;
    //proceso
    salario = (hora_n_v * horas_n) + (hora_e_v * horas_e);

    return salario;
}

void calcularDescucentos(float salario) {
    float seguro, afp, renta, neto;
    //calcular descuentos
    seguro = salario * 0.04;
    afp = salario * 0.0625;
    if (salario > 500) {
        renta = salario * 0.1;
        //salario neto
        neto = salario - seguro - afp - renta;
    } else {
        renta = 0;
        //salario neto
        neto = salario - seguro - afp;
    }
    cout << "--- Descuentos ---" << endl;
    cout << "Seguro social 4%: $" << seguro << endl;
    cout << "AFP 6.25%: $" << afp << endl;
    cout << "Renta 10%: $" << renta << endl;
    cout << "---" << endl;
    cout << "Slario Neto: $" << neto << endl;
     cout << "---" << endl;
}

bool validarDatos(float horas_n, float horas_e) {
    if (horas_n >= 0 && horas_e >= 0) {
        return true;
    } else {
        return false;
    }
}