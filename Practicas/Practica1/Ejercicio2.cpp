#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double numero1=0;
    double numero2=0;
    double numero3=0;
    double media=0;
    double varianza=0;
    double desviacion=0;


    cout<< "Introduce el numero 1: "<< endl;
    cin>>numero1;

    cout<< "Introduce el nuemro 2: "<< endl;
    cin>>numero2;

    cout<< "Introduce el numero 3: "<< endl;
    cin>>numero3;

    media = (numero1 + numero2 + numero3) / 3;
    varianza = (pow((numero1 - media),2) + pow((numero2 - media),2) + pow((numero3 - media),2)) /
                3;
    desviacion = sqrt(varianza);

    cout<< "La media es: " << media << endl;
    cout<< "La varianza es: "<< varianza << endl;
    cout<< "La desviacion tipica es: "<< desviacion << endl;
}
