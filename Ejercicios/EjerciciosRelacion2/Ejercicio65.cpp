#include <iostream>
using namespace std;
int main(){

      int numero, sumaDivisores=0, perfecto;
      bool numeroPerfecto=false;


      cout<<"Escriba un numero: ";
      cin>>numero;

      numero--;

      for(int i=numero; i >= 6 && !numeroPerfecto; i--){
            //Calculamos los divisores de 8
            for(int j=1; j < i && !numeroPerfecto; j++){
                  // Si el resto entre el dividendo y el divisor el 0, es divisor
                  if( i % j == 0){
                        //Sumamos los divisores
                        sumaDivisores = sumaDivisores + j;
                  }

            }
            if(sumaDivisores == i){
                  numeroPerfecto = true;
                  perfecto = i;
            }
            sumaDivisores=0;
      }
      if (!numeroPerfecto)
            cout<<"No existe ningun numero perfecto por debajo de "<< numero<<endl;
      else
            cout<< "El primer numero perfecto inferior a " << numero + 1 << " es: "<< perfecto <<endl;
}
