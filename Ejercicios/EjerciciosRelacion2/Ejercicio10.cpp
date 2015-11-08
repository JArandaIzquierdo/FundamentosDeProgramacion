#include <iostream>
using namespace std;
int main (){

    int edad;
    double salario,salarioModificado;

    cout << "Introduzca la edad: ";
    cin >> edad;

    cout << "Introduzca el salario: ";
    cin >> salario;

    if (edad > 65 || edad < 35){
      salarioModificado = salario + (salario * 0.04);

      if (salario < 300)
        salarioModificado = salarioModificado + (salario * 0.03);
    }
    else
      salarioModificado = salario;
    cout << "El salario final es de: " << salarioModificado << endl;


}
