#include <iostream>
using namespace std;
int main(){

  double distanciaRecorrida, gasolinaConsumida, gasolinaEnDeposito,
  consumo=0, litrosALos100=0, kmRestantes=0;

  cout << "Insete la distancia recorrida en Km: ";
  cin >> distanciaRecorrida;

  cout << "Insete los litros de combustible consumido: ";
  cin >> gasolinaConsumida;

  cout << "Insete los litros de combustible en el deposito ";
  cin >> gasolinaEnDeposito;

  consumo = distanciaRecorrida / gasolinaConsumida;
  litrosALos100 = 100 * gasolinaConsumida /distanciaRecorrida;
  kmRestantes = (gasolinaEnDeposito * distanciaRecorrida) / gasolinaConsumida;

  cout<< " Los kilometros que puede recorrer con 1 litro de combustible son: " <<
  consumo << endl;

  cout<< " Los litros que se consumen cada 100 km son: "<< litrosALos100 << endl;

  cout<< " Los kilometros de autonomia restantes son: "<< kmRestantes << endl;
}
