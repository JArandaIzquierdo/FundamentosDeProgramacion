#include <iostream>
using namespace std;
int main(){

  double hora_ini=0, hora_fin=0, minutos_ini=0, minutos_fin=0, segundos_ini=0, segundos_fin=0;
  double totalSegundosIni=0, totalSegundosFin=0, total=0;

  cout<< "Introduzca la hora, minutos y segundos de inicio: ";
  cin>> hora_ini;
  cin>> minutos_ini;
  cin>> segundos_ini;

  cout<< "Introduzca la hora, minutos y segundos finales: ";
  cin>> hora_fin;
  cin>> minutos_fin;
  cin>> segundos_fin;

  totalSegundosIni = (((((hora_ini * 60) + minutos_ini)) * 60) + segundos_ini);
  totalSegundosFin = (((((hora_fin * 60) + minutos_fin)) * 60) + segundos_fin);

  total = totalSegundosFin - totalSegundosIni;

  cout<< " Los segundos de diferencia entre ambos instantes es: "<< total << endl;


}
