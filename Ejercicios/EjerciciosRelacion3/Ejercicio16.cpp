#include <iostream>
#include <string>
using namespace std;

class AlumnoFP{
private:
    string nombre,
        primerApellido,
        DNI;
    int teoria,
        parcial_practica1,
        parcial_practica2,
        participacion_clase;

public:
        AlumnoFP(string name, string firstName, string identifica){
            nombre = name;
            primerApellido = firstName;
            DNI = identifica;
        }

        int notaFinal(){
            int notaFinal = (teoria * 0.7) + (parcial_practica1 * 0.05) + (parcial_practica2 * 0.15) + (participacion_clase * 0.1);

            return notaFinal;
        }
        void setNotas(int teo, int prac1, int prac2, int parti){
            teoria = teo;
            parcial_practica1 = prac1;
            parcial_practica2 = prac2;
            participacion_clase = parti;
        }
        //Metodos get para comprobar si en alguna de las parter siente menos de 5
        int getTeoria(){
            return teoria;
        }

        int getPract1(){
            return parcial_practica1;
        }

        int getPract2(){
            return parcial_practica2;
        }

        int getPartici(){
            return participacion_clase;
        }
};

int main(){

    string nombre, primerApellido, DNI;
    int teoria, parcial_practica1,parcial_practica2,participacion_clase;

    cout<<"Introduzca el nombre del alumno: ";
    cin>>nombre;

    cout<<"Introduzca el apellido del alumno: ";
    cin>>primerApellido;

    cout<<"Introduzca el DNI del alumno: ";
    cin>>DNI;

    //Creamos el alumno
    AlumnoFP alumno1(nombre, primerApellido, DNI);

    cout<<"Introduzca la nota de teoria del alumno: ";
    cin>>teoria;

    cout<<"Introduzca la nota del primer parcial del alumno: ";
    cin>>parcial_practica1;

    cout<<"Introduzca la nota del segundo parcial del alumno: ";
    cin>>parcial_practica2;

    cout<<"Introduzca la nota de participacion del alumno: ";
    cin>>participacion_clase;

    alumno1.setNotas(teoria,parcial_practica1,parcial_practica2,participacion_clase);

    if(alumno1.getTeoria() < 5)
        cout<<"El alumno ha suspendido la parte de teoria"<<endl;

    if(alumno1.getPract1() < 5)
            cout<<"El alumno ha suspendido el parcial 1"<<endl;

    if(alumno1.getPract2() < 5)
        cout<<"El alumno ha suspendido el parcial 2"<<endl;

    if(alumno1.getPartici() < 5)
        cout<<"El alumno ha suspendido la parte de participacion"<<endl;

    if (alumno1.notaFinal()< 5){
        cout<<"El alumno ha aprobado la asignatura"<<endl;
    }
    else
        cout << "El alumno no ha aprobado la asignatura"<<endl;
}
