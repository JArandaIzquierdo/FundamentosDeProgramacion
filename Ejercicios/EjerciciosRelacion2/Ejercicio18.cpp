#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int tope, divisor;

    cout << "Introducir un entero positivo: " << endl;

    do{
        cin >> tope;
    }while (tope < 0);

    divisor = 1;

    while(divisor < tope){
        if (tope%divisor == 0)
                cout << "Los divisores de " << tope << " son: " << divisor << endl;
                divisor++;
    }
}
