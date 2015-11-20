#include <iostream>
using namespace std;

double CalcularSalario (int horas, double precio){
      double salario;
      if (horas > 40){
            salario = ((40*precio) + ((horas-40)*(precio+(precio*0.5))));
      }
      else
            salario = horas * precio;

      return salario;
}
int main(){

      int horas;
      double salario, precio;

      cout << "Introduzca las horas trabajadas: ";
      cin >> horas;

      cout << "Introduzca el precio por hora: ";
      cin >> precio;

      salario = CalcularSalario(horas, precio);

      cout << "Tu salario es de "<<salario << " €" << endl;
}
