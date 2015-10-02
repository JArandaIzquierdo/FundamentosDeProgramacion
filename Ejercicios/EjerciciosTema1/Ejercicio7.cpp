#include <iostream>
using namespace std;
int main(){

  double distanciaRecorrida=0, gasolinaConsumida=0, gasolinaEnDeposito=0,
  consumo=0, litrosALos100=0, kmRestantes=0;

  cout << "Insete la distancia recorrida en Km: ";
  cin >> distanciaRecorrida;

  cout << "Insete los litros de combustible consumido: ";
  cin >> gasolinaConsumida;

  cout << "Insete los litros de combustible en el deposito ";
  cin >> gasolinaEnDeposito;

  consumo = distanciaRecorrida / gasolinaConsumida;
  litrosALos100 = 100 * gasolinaConsumida /distanciaRecorrida;
  kmRestantes = 
}
