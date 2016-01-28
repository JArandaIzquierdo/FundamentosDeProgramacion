#include <iostream>
using namespace std;
class Recta{
public:
        int A,B,C;
};

int main(){
    //Definimos las dos rectas
    Recta recta1, recta2;
    //Definimos los resultados de la pendiente
    double pendiente1,pendiente2;
    //Definimos los coeficientes de las dos rectas

    cout<<"Introduzca los datos de la recta 1: ";
    cin>>recta1.A;
    cin>>recta1.B;
    cin>>recta1.C;

    cout<<"Introduzca los datos de la recta 2: ";
    cin>>recta2.A;
    cin>>recta2.B;
    cin>>recta2.C;

    pendiente1 = (recta1.A * -1) / recta1.B;
    pendiente2 = (recta2.A * -1) / recta2.B;

    cout<<"La pendiente de la recta 1 es: "<<pendiente1<<endl;
    cout<<"La pendiente de la recta 2 es: "<<pendiente2<<endl;

}
