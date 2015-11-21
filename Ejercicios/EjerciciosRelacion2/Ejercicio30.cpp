#include <iostream>

using namespace std;

int main(){

	int sucursal,unidades,acumulador1=0,acumulador2=0,acumulador3=0;
	char producto;

	cout << "Introduce la sucursal, el producto y las unidades" << endl;

	do{
		cin >> sucursal;
		if(sucursal >=1 && sucursal <=3){
			do{
				cin >> producto;
			}while(!(producto>='a' && producto <='c'));

			do{
				cin >> unidades;
			}while(!(unidades > 0));

			if(sucursal==1 && producto>='a' && producto <='c'){
				acumulador1 = acumulador1 + unidades;
			}
			else if(sucursal==2 && producto>='a' && producto <='c'){
				acumulador2 = acumulador2 + unidades;
			}
			else
				acumulador3 = acumulador3 + unidades;
		}
	}while(sucursal>=1 && sucursal<=3);
        if(acumulador1 > acumulador2 && acumulador1 > acumulador3)
			cout << "La sucursal uno es la que mayor numero de unidades ha vendido con: " << acumulador1 << endl;
        else if(acumulador2 > acumulador1 && acumulador2 > acumulador3)
			cout << "La sucursal dos es la que mayor numero de unidades ha vendido con: " << acumulador2 << endl;
        else
            cout << "La sucursal tres es la que mayor numero de unidades ha vendido con: " << acumulador3 << endl;
}
