#include <iostream>
using namespace std;
int main(){

  int dias=0, horas=0, minutos=0, segundos=0, horas_ini=0, minutos_ini=0,
      segundos_ini=0;

      cout<< " Introduzca el numero de horas: ";
      cin>>horas_ini;

      cout<< " Introduzca el numero de minutos: ";
      cin>>minutos_ini;

      cout<< " Introduzca el numero de segundos: ";
      cin>>segundos_ini;

      segundos = segundos_ini % 60;
      minutos = (segundos_ini / 60) + (minutos_ini);
      horas = (minutos / 60) + (horas_ini);
      dias = horas / 24;
      minutos = minutos % 60;
      horas = horas % 24;


      cout<< " El numero de dias, horas, minutos y segundos es: "<< endl <<
              dias << " Dias " << endl <<
              horas << " Horas " << endl <<
              minutos << " Minutos " << endl <<
              segundos << " Segundos " << endl;

}
