#include <iostream>
using namespace std;
class Recta{
public:
    int a,b,c;
    //Metodo de la clase para obtener la pendiente
    double calcularPendiente(){
        double pendiente = (a * -1) / b;
        return pendiente;
    }
    //Metodo para obtener la ordenada y
    double ordenadaY(int x){
        double ordenadaY = (((c*-1) - (x*a))/ b);
        return ordenadaY;
    }
    //Metodo para obtener la abcisa x
    double abcisaX(int y){
        double abcisaX = (((c*-1) - (y*b)) / a);
        return abcisaX;
    }
};

int main(){
    //Definimos las dos rectas
    Recta recta1, recta2;

    //Definimos los resultados de la pendiente
    double pendiente1,pendiente2;

    //Valores para abcisa x y ordenada y
    int x,y;

    //Definimos los coeficientes de las dos rectas
    cout<<"Introduzca los datos de la recta 1: ";
    cin>>recta1.a;
    cin>>recta1.b;
    cin>>recta1.c;

    cout<<"Introduzca los datos de la recta 2: ";
    cin>>recta2.a;
    cin>>recta2.b;
    cin>>recta2.c;

    //Calculamos la pendiente de las rectas
    pendiente1 = recta1.calcularPendiente();
    pendiente2 = recta2.calcularPendiente();

    cout<<"La pendiente de la recta 1 es: "<<pendiente1<<endl;
    cout<<"La pendiente de la recta 2 es: "<<pendiente2<<endl;

    cout<<"Introduzca un valor de abcisa x para ortener la ordenada de la recta 1: ";
    cin>>x;

    double valorOrdenadaY = recta1.ordenadaY(x);

    cout<<"El valor de la ordenada Y es de: "<< valorOrdenadaY<<endl;

    cout<<"Introduzca un valor de ordenada Y para ortener la abcisa X de la recta 1: ";
    cin>>y;

    double valorAbcisaX = recta1.abcisaX(y);

    cout<<"El valor de la abcisa X es de: "<< valorOrdenadaY<<endl;
}
