#include <iostream>
using namespace std;
int main(){
    int numero;
    bool esFactor = false;


    cout<< "Introduce un numero: "<<endl;
    cin>>numero;

    if ((numero % 2 == 0) && (numero % 3 == 0))
        esFactor=true;

    if(esFactor == true){
        cout<< " El numero tiene como factores primos al 2 y al 3"<<endl;
    }
    else
        cout<< "El numero NO tiene como factores primos al 2 y al 3"<<endl;
}
