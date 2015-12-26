#include <iostream>
#include <cmath>
using namespace std;
int main(){

  double persona1, persona2, persona3, media=0, desviacion=0;

  cout<<  "Introduzca la altura de la primera persona: ";
  cin>> persona1;

  cout<<  "Introduzca la altura de la segunda persona: ";
  cin>> persona2;

  cout<<  "Introduzca la altura de la tercera persona: ";
  cin>> persona3;

  media = (persona1 + persona2 + persona3) * (1.0/3.0);

  desviacion = sqrt((1.0/3.0) * ( pow((persona1 - media),2) + pow((persona2 - media),2) + pow((persona3 - media),2)));

  cout<< "La media es: "<< media<< endl;
  cout<< "La desviacion es: "<< desviacion << endl;

  // Comparaciones de los datos de la persona1 con la media
  if(persona1 >= media)
    cout << persona1 << " es mayor o igual que la media." << endl;
  else
    cout << persona1 << " es menor que la media." << endl;

  // Comparaciones de los datos de la persona1 con la media
  if(persona2 >= media)
    cout << persona2 << " es mayor o igual que la media." << endl;
  else
    cout << persona2 << " es menor que la media." << endl;

  // Comparaciones de los datos de la persona1 con la media
  if(persona3 >= media)
    cout << persona3 << " es mayor o igual que la media." << endl;
  else
    cout << persona3 << " es menor que la media." << endl;
}
