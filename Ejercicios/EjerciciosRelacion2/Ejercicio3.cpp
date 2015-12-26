#include <iostream>
using namespace std;
int main(){

  int edad;
  double salario;

  cout << "Inserte su edad: ";
  cin >> edad;

  cout << "Inserte su salario: ";
  cin >> salario;

  if(salario < 300 && edad > 65){
    salario = salario + (salario * 0.05);
    cout << " Tu salario ahora es de: " << salario << endl;
  }
  else
    cout << "No es aplicable la subida" << endl;

}
