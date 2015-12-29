#include <iostream>
#include <cmath>

using namespace std;

int main(){

      int numero, divisor;

      cout << "Introducir un entero positivo: " << endl;
      cin >> numero;

    for (int i=1;i<numero; i++){
          if(numero % i == 0){
                cout<< i << " es divisor de " << numero << endl;
          }
   }
}
