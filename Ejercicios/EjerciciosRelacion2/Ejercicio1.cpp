#include <iostream>
using namespace std;
 int main(){
       int horaEntrada, horaSalida, // Hora de entrada y salida
            minutosEntrada, minutosSalida,
            estancia;

      double precio;

      //Introducimos la hora de entrada y de salida
      cout<< "Introduzca la hora de entrada: ";
      cin>> horaEntrada;

      cout<< "Introduzca los minutos de entrada: ";
      cin>> minutosEntrada;

      cout<< " Introduzca la hora de salida: ";
      cin>>horaSalida;

      cout<< "Introduzca los minutos de salida: ";
      cin>> minutosSalida;

      //Calculamos cuanto tiempo se ha estado en el parking
      estancia = ((horaSalida * 60) + minutosSalida) - ((horaEntrada * 60) + minutosEntrada);

      cout<< "Ha permanecido en el parking "<< estancia << " minutos"<<endl;

      if(estancia < 30)
            precio = estancia * 0.0412;

      if(estancia > 30 && estancia < 90)
            precio = (30 * 0.0412) + ((estancia - 30) * 0.0370);

      if(estancia > 90 && estancia < 660)
            precio = (30 * 0.0412) + (60 * 0.0370) + ((estancia - 90) * 0.0493);
            
      if(estancia > 660)
            precio = 31.55;

      cout << "Tiene que pagar " << precio << " €"<< endl;
 }
