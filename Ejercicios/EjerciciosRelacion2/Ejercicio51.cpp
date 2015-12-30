#include <iostream>
#include <cmath>
using namespace std;
int main(){
      int funcion, x=-50, y=40;

      for(int i=x; i<=50; i++){
            for(int j=y; j >= -40; j--){
                  funcion = sqrt(i) / (pow(j,2)-1);
                  cout<<"El valor de la funcion para los varos de x="<<i<<" e y="<< j << " es: "<< funcion << endl;
            }
      }
}
