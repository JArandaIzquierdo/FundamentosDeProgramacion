#include <iostream>
using namespace std;
int main(){
    double numero1;
    double numero2;

    cout<< "Introduce el primer numero:"<<endl;
    cin>> numero1;

    cout<< "Introduce el segundo numero:"<<endl;
    cin>> numero2;

    if (numero1 > numero2){
        cout<< " El numero mayor es: "<< numero1 << endl;
    }
    else{
        cout << "El numero mayor es: "<< numero2 << endl;
    }
}
