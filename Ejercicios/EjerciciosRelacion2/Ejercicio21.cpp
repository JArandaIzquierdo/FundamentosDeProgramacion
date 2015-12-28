#include <iostream>
using namespace std;
int main (){
      char dato;

      do{
            cout << "Introduzca una letra en mayuscula: ";
            cin >> dato;
      }
      while(dato < 'A' || dato > 'Z');

      cout<< "La letra introcucida es: "<< dato << endl;
}
