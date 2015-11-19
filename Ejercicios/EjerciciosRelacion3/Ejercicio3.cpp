#include <iostream>

using namespace std;
// Filtro para no admitir un n negativo
void LeeEnteroPositivo(int n){
      if (n < 0){
            cout<<"El numero tiene que ser positivo"<<endl;
            exit (0);
      }
}

// Funcion para el calculo del factorial
int Factorial(int n){
      int factorial=1;
      for(int i=1;i <= n;i++){
            factorial = factorial * i;
      }
      return factorial;
}
// Funcion para calcular la potencia
int Potencia(int n, double x){
      int potencia=1;
      for (int i=1; i <= n; i++){
            potencia = potencia * x;
      }
      return potencia;
}



int main (){

      int n,factorial;
      double x, potencia;

      cout<< "Introduzca el numero n: ";
      cin >> n;
      LeeEnteroPositivo(n);

      cout << "Introduzca el numero x: ";
      cin >> x;

      factorial=Factorial(n);
      potencia=Potencia(n,x);


      cout << "El factorial de "<< n << " es: "<< factorial << endl;
      cout << x << " elevado a "<< n << ": " << potencia <<endl;
}
