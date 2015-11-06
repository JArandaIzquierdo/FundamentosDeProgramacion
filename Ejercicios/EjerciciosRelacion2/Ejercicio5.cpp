#include <iostream>
using namespace std;
int main (){

  int valor1, valor2, valor3;

  cout << "Introduzca un dato entero: ";
  cin >> valor1;

  cout << "Introduzca otro dato entero: ";
  cin >> valor2;

  cout << "Introduzca otro dato entero: ";
  cin >> valor3;

  if( valor1 < valor2 && valor2 < valor3)
    cout << "Los numero estan ordenados de menor a mayor" << endl;

  if (valor3 < valor2 && valor2 < valor1)
    cout << "Los numeros estan ordenados de mayor a menos" << endl;

  if (valor1 == valor2 || valor2 == valor3 || valor1 == valor3)
    cout << " Existen numeros repetidos" << endl;
}
