#include <iostream>
using namespace std;

double Max (double un_valor, double otro_valor, double el_tercero){
      if(un_valor > otro_valor && un_valor > el_tercero)
            return un_valor;
      else if (otro_valor > un_valor && otro_valor > el_tercero)
            return otro_valor;
      else
            return el_tercero;
}

int main(){

      double primer_valor,segundo_valor,tercer_valor,max;

      cout << "Introduzca el primer valor: ";
      cin >> primer_valor;

      cout << "Introduzca el segundo valor: ";
      cin >> segundo_valor;

      cout << "Introduzca el tercer valor: ";
      cin >> tercer_valor;

      max = Max(primer_valor,segundo_valor,tercer_valor);

      cout << " El maximo de los tres es: " << max << endl;
}
