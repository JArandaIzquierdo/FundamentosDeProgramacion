#include <iostream>
using namespace std;

class Recta{
private:
    int a,b,c;
    //utilizado para ver si los coeficiente son correctos
    bool correctos;

    //Metodo para comprobar si los coeficientes son correctos o no
    //Para esto A y B no pueden ser nulos a la vez
    bool coeficienteCorrectos(int coe1,int coe2){
        if(coe1 == 0 && coe2 == 0)
            correctos = false;
        else
            correctos = true;
    }
public:
    //Contruector de la clase recta
    Recta(int &coefi1, int &coefi2, int &coefi3){

        coeficienteCorrectos(coefi1,coefi2);

        while (!correctos){
            cout<<"Coeficientes incorrectos, vuelva a introducirlos: ";
            cin>> coefi1 >> coefi2 >> coefi3;
            coeficienteCorrectos(coefi1,coefi2);
        }
        a = coefi1;
        b = coefi2;
        c = coefi3;
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

int main(){

    int opcion = 0,opcion2=0,
        a,b,c,
        x,y;

    double pendiente,ordenada,abcisa;

    while (opcion != -1){

        cout<<"-----------------------------------------------------------"<<endl<<
            "1. Introduce los valores de los coeficientes A,B y C"<<endl<<
            "-1. Salir"<<endl<<
            "-------------------------------------------------------------"<<endl;
            cin>>opcion;

            if (opcion == 1){
                cout<<"Introduce el coeficiente A: ";
                cin>> a;
                cout<<"Introduce el coeficiente B: ";
                cin>> b;
                cout<<"Introduce el coeficiente C: ";
                cin>> c;

                Recta recta(a,b,c);

                    // ............................ MENU 2 ...................................
                    while(opcion2 != -1){

                        cout<<"-----------------------------------------------------------"<<endl<<
                            "1. Calcular la ordenada Y"<<endl<<
                            "2. Calcular la abcisa X"<<endl<<
                            "3. Calcular pendiente"<<endl<<
                            "-1. Salir"<<endl<<
                            "-------------------------------------------------------------"<<endl;
                            cin>>opcion2;

                        if(opcion2 == 1){
                            cout<<"Introduzca la abcisa X para calcular la ordenada Y: ";
                            cin>>x;
                            ordenada = recta.ordenadaY(x);
                            cout<<"La ordenada es: "<< ordenada<<endl;
                        }
                        if(opcion2 == 2){
                            cout<<"Introduzca la ordenada Y para calcular la abcisa X: ";
                            cin>>y;
                            abcisa = recta.abcisaX(y);
                            cout<<"La abcisa es: "<< ordenada<<endl;
                        }


                        if(opcion2 == 3){
                            pendiente = recta.calcularPendiente();
                            cout<<"La pendiente es: "<< pendiente << endl;
                        }
                    }
            }
            opcion2=0;
    }
}
