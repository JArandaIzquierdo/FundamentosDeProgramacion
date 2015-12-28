#include <iostream>
using namespace std;
int main(){
      int   dato,
            contador,
            menor;

      cout<< "Introduzca un numero: ";
      cin>>dato;
      menor = dato;

      while(dato!=0){

            //Si el dato que nos da el menos que el numero menos que tenemos
            if(dato < menor)
                  // Ese dato sera el numero menor ahora
                  menor = dato;

            contador++;

            cout << "Introduzca otro dato: ";
            cin >> dato;
      }
      cout << "El numero menor es: "<< menor <<endl;
      cout << "El numero de datos introducidos son: "<< contador<< endl;
}
