#include <iostream>
#include <cmath>
using namespace std;
int main(){

  double persona1=0, persona2=0, persona3=0, media=0, desviacion=0;

  cout<<  "Introduzca la altura de la primera persona: ";
  cin>> persona1;

  cout<<  "Introduzca la altura de la segunda persona: ";
  cin>> persona2;

  cout<<  "Introduzca la altura de la tercera persona: ";
  cin>> persona3;

  media = (persona1 + persona2 + persona3) * (1.0/3.0);

  desviacion = sqrt((1.0/3.0) * ( pow((persona1 - media),2) + pow((persona2 - media),2) + pow((persona3 - media),2)));

  cout<< " La media es: "<< media<< endl;
  cout<< " La desviacion es: "<< desviacion << endl;

}
