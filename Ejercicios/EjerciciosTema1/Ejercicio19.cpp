/* Ejercicio 19.
    Calculo de la media aritmetica y la desviacion tipica.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

  int persona1=0, persona2=0, persona3=0, media=0, desviacion=0;

  cout<<  "Introduzca la altura de la primera persona: ";
  cin>> persona1;

  cout<<  "Introduzca la altura de la segunda persona: ";
  cin>> persona2;

  cout<<  "Introduzca la altura de la tercera persona: ";
  cin>> persona3;

  media = (persona1 + persona2 + persona3) * (1/3);

  desviacion = sqrt((1/3) * ( pow((persona1 - media),2) + pow((persona2 - media),2) + pow((persona3 - media),2)));

  cout<< " La media es: "<< media<< endl;
  cout<< " La desviacion es: "<< desviacion << endl;

}
