#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int number, result, counter=0, zeros;

    //Comprobacion de que es un numero entero
    do{
    	cout << "Introduce un numero entero: ";
      cin >> number;

      }while (number < 0);

      // We count how many digits we are going print
      for(int i = number; i > 0; i = i/10)
            counter++;

       while(number > 0){

           zeros = pow(10, counter - 1);

           result = number / zeros;
           number = number % zeros;
           counter--;

           //Muestra resultados
           cout << " " << result;
       }
       cout<<endl;
}
