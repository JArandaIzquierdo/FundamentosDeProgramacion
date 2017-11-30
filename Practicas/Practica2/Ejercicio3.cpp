#include <iostream>
using namespace std;
int main(){
    double numero1;
    double numero2;
    double numero3;

    cout<< "Introduce el primer numero:"<<endl;
    cin>> numero1;

    cout<< "Introduce el segundo numero:"<<endl;
    cin>> numero2;

    cout<< "Introduce el segundo numero:"<<endl;
    cin>> numero3;

    if ((numero1 > numero2) && (numero1 > numero3)){
            cout<< " El numero mayor es: "<< numero1 << endl;
    }
    else if((numero2 > numero1) && (numero2 > numero3)){
                cout << "El numero mayor es: "<< numero2 << endl;
    }
    else if((numero3 > numero1) && (numero3 > numero2)){
            cout<< "El numero mayor es:"<< numero3 << endl;
        }
}
