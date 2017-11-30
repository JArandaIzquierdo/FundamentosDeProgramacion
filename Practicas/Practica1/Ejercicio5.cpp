#include <iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    int z=30;
    int aux=0;

    cout<< "El valor de x: "<< x << ", el valor de y: "<< y << ", el valor de z: "<< z << endl;

    aux=x;
    x=z;
    z=y;
    y=aux;

    cout<< "Los nuevos valores son: x="<< x <<", y="<< y << "y z="<< z <<endl;
}
