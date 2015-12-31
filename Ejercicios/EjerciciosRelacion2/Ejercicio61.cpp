#include <iostream>
using namespace std;
int main(){
      int tope, factorial=1;

      cout<<"Escriba un numero tope: ";
      cin>>tope;

      for(int i=1; i<=tope; i++){
            for(int j=1; j<=i; j++){
                  factorial = factorial * j;
            }
            cout<<"Factorial de "<< i << " es: "<< factorial<<endl;
            factorial=1;
      }
}
