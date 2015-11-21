#include <iostream>

using namespace std;

int main(){
	
    int precio_inicial = 150;
    double km, precio_adicional, km1, precio_final, rebaja, precio_rebajado;
    char respuesta;
    bool es_cliente = false;

    cout << "Introduzca el numero de kilometros hasta el destino final: ";
    cin >> km;
    cout << "Indique si es usted un cliente previo de esta empresa: ";
    cin >> respuesta;

    if(respuesta == 'SI' || respuesta == 'si'){
        es_cliente = true;
        if(es_cliente){
            if (km <= 200){
                rebaja = (precio_inicial * 5) / 100;
                precio_final = precio_inicial - rebaja;
                cout << "El precio del billete es de: " << precio_final << " euros" << endl;
            }
            else{
                precio_adicional = (km - 200) * 0.1;
                precio_final = precio_inicial + precio_adicional;
                rebaja = (precio_final * 5) / 100;
                precio_rebajado = precio_final - rebaja;
                cout << "El precio del billete es de: " << precio_rebajado << " euros" << endl;
            }
        }
    }
    else{
        if (km <= 200)
            cout << "El precio del billete es de: " << precio_inicial << " euros" << endl;
        else{
            if(km <= 600){
                precio_adicional = (km - 200) * 0.1;
                precio_final = precio_inicial + precio_adicional;
                cout << "El precio del billete es de: " << precio_final << " euros" << endl;
            }
            else{
                if(km <= 1100){
                    precio_adicional = (km - 200) * 0.1;
                    precio_final = precio_inicial + precio_adicional;
                    rebaja = (precio_final * 3) / 100;
                    precio_rebajado = precio_final - rebaja;
                    cout << "El precio del billete es de: " << precio_rebajado << " euros" << endl;
                }
                else{
                    precio_adicional = (km - 200) * 0.1;
                    precio_final = precio_inicial + precio_adicional;
                    rebaja = (precio_final * 4) / 100;
                    precio_rebajado = precio_final - rebaja;
                    cout << "El precio del billete es de: " << precio_rebajado << " euros" << endl;
                }
            }
        }
    }

    return 0;
}
