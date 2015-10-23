#include <iostream>
using namespace std;
int main(){

  char mayuscula, minuscula;

  cout<<" Introduzca una letra en mayuscula: ";
  cin>> mayuscula;

  minuscula = mayuscula + 32;

  cout<< "La letra en minucula es: " << minuscula << endl;
}
