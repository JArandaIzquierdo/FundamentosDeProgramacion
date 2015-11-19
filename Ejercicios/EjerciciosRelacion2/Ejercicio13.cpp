#include <iostream>
using namespace std;
int main (){

    double rentaBruta, rentaFiscal, rentaNeta, retencionInicial;
    char esTrabajador, esPensinista, estadoCivil;

    cout << "¿Es usted trabajador (s/n)?: ";
    cin >> esTrabajador;

    cout << " ¿Es usted pensionista(s/n)?: ";
    cin >> esPensinista;

    cout << " Estado Civil: ";
    cin >> estadoCivil;

    cout << "Su renta bruta es de: ";
    cin >> rentaBruta;

    cout << "Retencion inicial a aplicar: ";
    cin >> retencionInicial;
}
