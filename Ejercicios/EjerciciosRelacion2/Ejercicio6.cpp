#include <iostream>
using namespace std;
int main (){

  int anio;

  cout << "Introduzca un anio: ";
  cin >> anio;

  if( anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0))
    cout << "El anio es bisiesto" << endl;
  else
    cout << "El anio no es bisiesto" << endl;
}
