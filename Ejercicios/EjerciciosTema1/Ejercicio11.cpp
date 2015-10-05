#include <iostream>
using namespace std;
int main (){

  double radio=0, areaCirculo=0, longitudCircunferencia=0;
  const double PI = 3.1415927;

  cout<< " Introduzca el radio de una circunferencia: ";
  cin>> radio;

  areaCirculo = PI * radio * radio;

  longitudCircunferencia = 2 * PI * radio;

  cout<< "El area de la circunferencia es: "<< areaCirculo<<endl;
  cout<< "La longitud de la circunferencia es: "<< longitudCircunferencia<<endl;

}
