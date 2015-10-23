#include <iostream>
using namespace std;
int main (){

  char car;
  int entero=0;

  cout<< "Introduzca un caracter entre comillas del 0 al 9: ";
  cin >> car;

  entero = car;
  entero = entero - '0';

  cout<< "El dato en tipo entero es: " << entero << endl;
}
