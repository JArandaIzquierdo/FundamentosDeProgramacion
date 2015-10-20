#include <iostream>
using namespace std;
int main(){

  double precio, precio_final;
  const double GANANCIA_VENDEDOR = 0.2, IVA = 0.16;

  cout<<" Introduzca el precio inicial del coche: ";
  cin>>precio;

  precio_final = precio + (precio * GANANCIA_VENDEDOR) + (precio * IVA);

  cout<< "El precio con todos los impues añadidos es de : " << precio_final << endl;
}
