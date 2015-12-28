#include <iostream>
using namespace std;
int main (){

      int   anio, anioInicio, anioFin;

      cout<< "Introduzca el año de inicio: ";
      cin>> anioInicio;

      cout<< "Introduzca el año de fin: ";
      cin>> anioFin;

      anio = anioInicio;

      while(anio <= anioFin){

            if( anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0))
                  cout<< " El año "<< anio << " es bisiesto"<<endl;
            anio++;
      }

}
