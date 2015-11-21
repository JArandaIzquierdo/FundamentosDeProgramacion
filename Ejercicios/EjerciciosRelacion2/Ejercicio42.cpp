#include <iostream>

using namespace std;

int main(){

    int numero, minimo, maximo, entero;
    int contador = 0;

    cout << "Introduce un numero entero 1 y 9 ";
    cin >> entero;

    while(entero < 1 || entero > 9){
          cout << "Introduce un numero entero 1 y 9 ";
          cin >> entero;
      }

    do{
    	cout << "Introduce un entero minimo ";
      cin >> minimo;
    }while(!(minimo > 0));

    do{
    	 cout << "Introduce un entero maximo ";
       cin >> maximo;
    }while(!(maximo >= minimo));


    for(int i = minimo; i<= maximo; i++){
        int aux=i;
        while(aux !=0){
            numero = aux % 10;
            aux = aux / 10;
            if(numero == entero)
                contador++;
        }
    }

	cout << "El numero entero lo contine " << contador << " veces" << endl;
}
