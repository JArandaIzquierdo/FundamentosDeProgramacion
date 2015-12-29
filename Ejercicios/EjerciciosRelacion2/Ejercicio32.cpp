#include <iostream>
#include <cmath>
using namespace std;
int main(){
      int numero, copia, cifras=0, ultimaCifra;
      double suma = 0;
      bool esNarcisista;

      cout<< "Introduce un numero: ";
      cin>> numero;

      copia = numero;

      //Contamos cuantos digitos tiene el numero
      while(copia >0){
            copia = copia / 10;
            cifras++;
      }

      cout <<"El numero tiene "<< cifras << " digitos"<< endl;
      copia = numero;

      for(int i=1; i <= cifras; i++){
            ultimaCifra = copia % 10;
            suma = suma + pow (1.0 * ultimaCifra, cifras);
            copia = copia / 10;
      }

      if (suma == numero){
            cout << "El numero ES narcisista"<< endl;
      }
      else
            cout << "El nuemro NO ES narcisista"<< endl;

}
