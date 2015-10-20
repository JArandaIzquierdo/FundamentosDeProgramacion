#include <iostream>
using namespace std;
int main (){

  char letra;
  int edad, anio;

  cout<< " Introduce una letra minuscula: ";
  cin>> letra;

  cout << "El resultado de la expresion de la letra es: "<<
        (letra >= 96 && letra <= 122) << endl;

  cout<< "Introduzca una edad que sea menor que 18 o mayor que 65: ";
  cin>> edad;

  cout<< "El resultado de la expresion sobre la edad es: "<<
        (edad < 18 || edad > 65) << endl;

  cout<<" Introduzca un año para comprobar si es bisiesto o no: ";
  cin>>anio;

  cout<< "El resultado de la operacion sobre el eño bisiesto es: " <<
        ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) << endl;
}
