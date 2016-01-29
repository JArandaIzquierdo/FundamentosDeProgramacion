#include <iostream>
using namespace std;
class Recta{
private:
    int a,b,c;
    //utilizado para ver si los coeficiente son correctos
    bool correctos;

    //Metodo para comprobar si los coeficientes son correctos o no
    //Para esto A y B no pueden ser nulos a la vez
    bool coeficienteCorrectos(){
        if(a == 0 && b == 0)
            correctos = false;
        else
            correctos = true;
    }
public:
    //Contruector de la clase recta
    Recta(int coefi1, int coefi2, int coefi3){

        a = coefi1;
        b = coefi2;
        c = coefi3;

        coeficienteCorrectos();

        while (!correctos){
            introducirCoeficientes();
        }
    }

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

    //Metodo set para todos los coeficientes
    void setCoeficientes(int digito, int digito2, int digito3){
        a = digito;
        b = digito2;
        c = digito3;
    }
};
int introducirCoeficientes(){
    int a,b,c;

    cout<<"Introduzca los coeficientes de la recta";
    cin>>a;
    cin>>b;
    cin>>c;

    return 
}

int main(){

    //Definimos los resultados de la pendiente
    double pendiente1,pendiente2;

    //Valores para abcisa x y ordenada y
    int x,y;

    //Valore a b c
    int a,b,c;

    // --------------------------- DUDA DE ESTILO AL LEER Y METER LOS VALORES EN LA RECTA --------------------------

    //Definimos los coeficientes de las dos rectas
    introducirCoeficientes();
    //Le damos los valores a la recta
    Recta recta1(a,b,c);

    introducirCoeficientes();

    Recta recta2(a,b,c);

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
