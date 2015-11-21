#include <iostream>

using namespace std;

int main(){

    int aux, entero1, entero2, factorial1=1, factorial2=1, factorial3=1;
    int operacion;

    do{
    	cout << "Introduce dos  enteros: ";
        cin >> entero1 >> entero2;
    }while ((entero1 < 0) || (entero2 > entero1));

    aux = entero1 - entero2;

    for(int i=1; i<=entero1; i++)
        factorial1 = factorial1 * i;

    for(int j=1; j<=entero2; j++)
        factorial2 = factorial2 * j;

    for(int k=1; k<=aux; k++)
        factorial3 = factorial3 * k;

    operacion = factorial1/(factorial2*factorial3);

    cout << "El combinatorio de " << entero1 << " sobre " << entero2 << " es " << operacion << endl;

}
