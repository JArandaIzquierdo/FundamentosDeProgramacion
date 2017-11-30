#include <iostream>
using namespace std;
int main(){
    double intensidad=0;
    double resistencia=0;
    double voltaje=0;

    cout<< "Introduce el valor de la intesidad: "<< endl;
    cin>>intensidad;

    cout<< "Introduce el valor de la resistencia: "<< endl;
    cin>>resistencia;

    voltaje = intensidad / resistencia;

    cout<< "El valor del voltaje es: "<< voltaje << endl;
}
