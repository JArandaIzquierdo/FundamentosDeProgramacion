#include <iostream>
using namespace std;

void MostrarNumeroDeVeces(long long numero){

      long long int aux;
      int resto,contador,max=0,cifraMaxima=0; //x


      for (int i=0; i <= 9; i++){
            aux = numero;
            contador=0;
            for(int j=0; aux > 0; j++){
                  resto=aux%10;
                  aux = aux/10;

                  if (resto == i){
                        contador++;
                  }
            }
            if (contador > 0){
                  cout << "La cifra "<< i << " se repite "<< contador << " veces"<<endl;
            }
            if(contador > max){
                  max = contador;
                  cifraMaxima = i;
            }
      }
cout << "La cifra con el mayor numero de repeticiones es: "<<cifraMaxima<<endl;


}

// int CalcularDigitos (long long n){
//       int contador;
//       for (int i=0; n>0; i++){
//             n = n/10;
//             contador++;
//       }
//       return contador;
// }

int main (){

      long long int numero;

      do{
            cout << "Introduzca un numero entero grande: ";
            cin >> numero;
      }
      while (numero < 0);

      MostrarNumeroDeVeces(numero);


}
