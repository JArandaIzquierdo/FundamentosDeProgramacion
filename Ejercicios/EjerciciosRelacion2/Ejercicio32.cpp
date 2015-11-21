#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int entero, digito, narcisista=0, i=0;
    int modulo, aux, aux2, div =1;
    double operacion;

    do{
    	 cout << "Introduce un entero positivo: ";
        cin >> entero;
    }while (entero < 0);

    aux = entero;
    aux2 = entero;

    while(digito !=0 ){
        aux2 = aux2 / 10;
        digito = aux2 % 10;
        i++;
    }

    for(int j=0; j<i-1; j++)
        div = div *10;

    while (div !=0){
        modulo = aux % div;
        digito = aux / div;
        operacion = pow(digito,i);
        narcisista = operacion + narcisista ;
        div = div / 10;
        aux = modulo;
    }

    if(narcisista==entero)
        cout << "El numero es narcisista"<<endl;
    else
        cout << "El numero no es narcisista"<<endl;;
}
