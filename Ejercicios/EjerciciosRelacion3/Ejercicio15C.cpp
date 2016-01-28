#include <iostream>
using namespace std;
class Recta{
private:
    int a,b,c;
public:
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
    //Metodos get
    int getA(){
        return a;
    }

    int getB(){
        return b;
    }

    int getC(){
        return c;
    }

    //Metodos set
    void setA(int digito){
        a = digito;
    }

    void setB(int digito){
        b = digito;
    }

    void setC(int digito){
        c = digito;
    }
};

int main(){
    //Definimos las dos rectas
    Recta recta1, recta2;

    //Definimos los resultados de la pendiente
    double pendiente1,pendiente2;

    //Valores para abcisa x y ordenada y
    int x,y;

    //Valore a b c
    int a,b,c;

    // --------------------------- DUDA DE ESTILO AL LEER Y METER LOS VALORES EN LA RECTA --------------------------

    //Definimos los coeficientes de las dos rectas
    cout<<"Introduzca los datos de la recta 1: ";
    cin>>a;
    cin>>b;
    cin>>c;

    recta1.setA(a);
    recta1.setB(b);
    recta1.setC(c);

    cout<<"Introduzca los datos de la recta 2: ";
    cin>>a;
    cin>>b;
    cin>>c;

    recta2.setA(a);
    recta2.setB(b);
    recta2.setC(c);

    // ---------------------------------------------------------------

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
