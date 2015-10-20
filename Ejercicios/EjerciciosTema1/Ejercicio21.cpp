#include <iostream>
using namespace std;
int main (){

  char car;
  int entero;

  cout<< "Introduzca un caracter entre comillas del 0 al 9: ";
  cin >> car;

  entero = car - 48;

  cout<< "El dato en tipo entero es: " << entero << endl;
}
