#include <iostream>
using namespace std;
int main(){

  int digitoInicial=0, primerDigito=0, segundoDigito=0, tercerDigito=0;

  cout<< "Escriba un digito de tres cifras: ";
  cin>> digitoInicial;

  primerDigito = digitoInicial / 100;

  segundoDigito = (digitoInicial / 10) % 10;

  tercerDigito = digitoInicial % 10;



  cout << primerDigito << "   " << segundoDigito << "   " << tercerDigito << endl;


}
