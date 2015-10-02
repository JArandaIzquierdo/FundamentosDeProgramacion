#include <iostream>
using namespace std;
int main (){

  double yardas=0, pulgadas=0, pies=0, millas=0, millasMarinas=0, metros=0;

  cout<< "Inserte una longitud cualquiera en yardas: "<< endl;
  cin>> yardas;

  metros = yardas * 0.9144;
  millas = metros / 1609.344;
  millasMarinas = metros / 1852;
  pies = ( metros * 100) / 30.45;
  pulgadas = (metros * 1000) / 25.4;

  cout<< "El valor en millas es: "<< millas << endl;
  cout<< "El valor en millas marinas es: "<< millasMarinas << endl;
  cout<< "El valor en pulgadas es: "<< pulgadas << endl;
  cout<< "El valor en pies es: "<< pies << endl;
}
