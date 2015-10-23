#include <iostream>
using namespace std;
int main(){

  double cantidadCapital, interes, capitalFinal=0;

  cout<< "Introduzca el capital a ingresar entre 0 y 100" << endl;
  cin>> cantidadCapital;

  cout<< "Introduzca un interes" << endl;
  cin>> interes;

  capitalFinal = cantidadCapital + cantidadCapital * (interes / 100);

  cout<< "El capital obtenido en un año seria de: " << capitalFinal << endl;
}
