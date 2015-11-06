#include <iostream>
using namespace std;
int main (){

  int valor1, valor2;

  cout << "Introduzca un dato entero: ";
  cin >> valor1;

  cout << "Introduzca otro dato entero: ";
  cin >> valor2;

  if (valor1 % valor2 == 0)
    cout << "El primer numero divide al segundo" << endl;
  else
    cout << "El primer numero no divide al segundo" << endl;

  if (valor2 % valor1 == 0)
    cout << "El segundo numero divide al primero" << endl;
  else
    cout << "El segundo numero no divide al primero" << endl;


}
