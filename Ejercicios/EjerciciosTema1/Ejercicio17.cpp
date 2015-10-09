#include <iostream>
using namespace std;
int main (){

  int x=10, y=20, z=30, auxiliar;

  cout<< "Los valosres de las variables son: "<<endl;
  cout<< "x = "<< x << endl;
  cout<< "y = "<< y << endl;
  cout<< "z = "<< z << endl;

  auxiliar = x;
  x = z;
  z = y;
  y = auxiliar;

  cout<< "Los valosres de las variables ahora son: "<<endl;
  cout<< "x = "<< x << endl;
  cout<< "y = "<< y << endl;
  cout<< "z = "<< z << endl;
}
