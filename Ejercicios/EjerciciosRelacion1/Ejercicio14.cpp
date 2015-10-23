/* Ejercicio 14
    Separar por espacios un valor entero (siempre de tres digitos)
    pedido al usuario

    CORREGIR!! primero %10 para coger el primer numero de la derecha y
    despues /10 para quitar ese digito del numero y repetir lo mismo hasta
    terminar
*/

#include <iostream>
using namespace std;
int main(){

  int digitoInicial, primerDigito=0, segundoDigito=0, tercerDigito=0;

  cout<< "Escriba un digito de tres cifras: ";
  cin>> digitoInicial;

  primerDigito = digitoInicial / 100;

  segundoDigito = (digitoInicial / 10) % 10;

  tercerDigito = digitoInicial % 10;



  cout << primerDigito << "   " << segundoDigito << "   " << tercerDigito << endl;


}
