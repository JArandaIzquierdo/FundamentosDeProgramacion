#include <iostream>
using namespace std;
int main (){

  int minutos, segundos, kmHora, ritmo, ritmo2, velocidad, minutos2, segundos2;

  cout<< "Introduzca los minutos del ritmo: ";
  cin>> minutos;

  cout<< " Introduzca los segundos del ritmo: ";
  cin>> segundos;

  ritmo = minutos * 60 + segundos;
  kmHora = 3600 / ritmo;

  cout<< " Los Km/h del corredor son: "<< kmHora << endl;

  cout<< " Introduzca la velocidad en Km/h: ";
  cin>> velocidad;

  ritmo2 = 3600 / velocidad;
  minutos2 = ritmo2 / 60;
  segundos2 = ritmo2 % 60;

  cout<< " El ritmo del corredor es de "<< minutos2 << " minutos " << segundos2 << " segundos " << endl;

 }
