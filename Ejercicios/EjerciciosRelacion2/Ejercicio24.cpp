/* Ejercicio 16.
    Calcular el numero de segundos que existen entre dos instantes del mismo dia
*/
#include <iostream>
using namespace std;
int main(){

      int   diaInicio,diaFin,
            hora_ini=0, hora_fin=0, minutos_ini=0, minutos_fin=0, segundos_ini=0, segundos_fin=0,
            totalSegundosIni=0, totalSegundosFin=0, total=0;

      cout<< "Introduzca el dia de inicio: ";
      cin>> diaInicio;

      cout<< "Introduzca el dia de fin: ";
      cin >> diaFin;

      while (diaFin - diaInicio != 1){
            cout<<"Introduzca un rango de dias valido"<<endl;

            cout<< "Introduzca el dia de inicio: ";
            cin>> diaInicio;

            cout<< "Introduzca el dia de fin: ";
            cin >> diaFin;
      }

      cout<< "Introduzca la hora, minutos y segundos de inicio: ";
      cin>> hora_ini >> minutos_ini >> segundos_ini;

      cout<< "Introduzca la hora, minutos y segundos finales: ";
      cin>> hora_fin >> minutos_fin >> segundos_fin;

      totalSegundosIni = (((((hora_ini * 60) + minutos_ini)) * 60) + segundos_ini);
      totalSegundosFin = (((((hora_fin * 60) + minutos_fin)) * 60) + segundos_fin);

      if ( diaFin - diaInicio == 0)
            total = totalSegundosFin - totalSegundosIni;

      if ( diaFin - diaInicio == 1)
            total = totalSegundosFin - totalSegundosIni + 86400;

      cout<< "Los segundos de diferencia entre ambos instantes es: "<< total << endl;
}
