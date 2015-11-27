#include <iostream>
using namespace std;

void MostrarNumeroDeVeces(long long numero){

      long long int aux;
      int resto,contador,masRepetida=0,consecutivos=0,contador2=0;


      for (int i=0; i <= 9; i++){
            aux = numero;
            contador=0;

            while(aux > 0){
                  resto=aux%10;
                  aux = aux/10;
                  cout << resto << endl;
                  if (resto == i){
                        contador++;
                        consecutivos++;// El problema esta aqui
                  }
                  else if(contador2 < consecutivos){
                        contador2=consecutivos;
                        cout<< "Contador2 = "<<contador2<<endl;
                        masRepetida=i;
                        consecutivos=0;
                  }
                  cout << "masRepetida es: "<< masRepetida<<endl;
            }
            if (contador > 0){
                  cout << "La cifra "<< i << " se repite "<< contador << " veces"<<endl;
            }
      }

cout << "La cifra mas repetida de forma consecutiva es: "<< masRepetida <<endl;


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
