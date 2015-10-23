#include <iostream>
using namespace std;
int main(){

  double diseniador=0, fabricantes=0;
  int gananciaTotal, gananciaParcial=0;

  cout<< "Introduzca la ganancia del producto: ";
  cin>> gananciaTotal;

  gananciaParcial = gananciaTotal / 5;
  diseniador = 2 * gananciaParcial;
  fabricantes = gananciaParcial;

  cout<< "La ganancia del diseñador es de : " << diseniador << endl;
  cout<< " La ganancia de cada fabricante es de: " << fabricantes << endl;
}
