#include <iostream>
using namespace std;
int main (){

  int unidades;
  double euros;

  cout << "Introduzca las unidades vendidas: ";
  cin >> unidades;

  cout << "Introduzca el importe final de la venta: ";
  cin >> euros;

  if ( unidades > 100 && euros > 700)
    euros = euros - (euros * 0.05);

  cout << "El precio final es de: " << euros << endl;

}
