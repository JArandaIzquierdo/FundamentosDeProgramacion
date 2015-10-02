#include <iostream>
using namespace std;
int main(){
	double voltaje=0, intensidad=0, resistencia=0;

    cout<< "Introduzca el valor de la intensidad: "<< endl;;
    cin>> intensidad;

    cout<< " Introduzca el valor de la resistencia"<< endl;
    cin>> resistencia;

    voltaje = intensidad * resistencia;

    cout<< "El voltaje obtenido es de: "<< voltaje << endl;

}
