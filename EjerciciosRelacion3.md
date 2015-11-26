###Fundamentos de Programacion

##Relacion de problemas 3. Funciones y clases
#####1. Encuentre los errores de las siguientes funciones:
```c++
int ValorAbsoluto (int entero){
	if (entero < 0)
    	entero= -entero;
	else
    	return entero;
}
```
El return tiene que estar fuera del else. En este caso, podriamos eliminar el else.

```c++
void Imprime(double valor){
	double valor;
    cout << valor;
}
```
Esta imprimiendo la variable valor declarada en la funcion y tiene un valor basura ya que no se ha inicializado.

```c++
void Cuadrado(int entero){
	return entero*entero;
}
```
Es una funcion void, no puede tener return, la funcion deberia ser de tipo int.

```c++
bool EsPositivo(int valor){
	if (valor > 0)
    	return true;
}
```
Si el valor es negativo no devuleve que el falso

#####2. Cread una función que calcule el máximo entre tres double. La cabecera de la fun- ción será la siguiente:
	double Max(double un_valor, double otro_valor, double el_tercero)
#####Construid un programa principal que llame a dicha función con unos valores leídos desde teclado. Supongamos que dichos valores los leemos con cin dentro de la pro- pia función, en vez de hacerlo en el main. El suspenso está garantizado ¿Por qué?
[Ejercicio 2 resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio2.cpp)

#####3. Reescribid la solución del ejercicio 33 (factorial y potencia) de la Relación de Problemas II, modularizándola con funciones.Para obligar a que el valor leído de n sea positivo, implemente y llame a la función int LeeEnteroPositivo()

[Ejercicio 3 resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio3.cpp)

#####4. Implemente la solución del ejercicio 32 (Narcisista) de la relación de problemas II, usando funciones.


#####5. Escriba una función en C++ LeeOpcion2Alternativas que imprima en pantalla un mensaje, lea una opción como un carácter y sólo permita aceptar los caracteres 'S' o 'N' (mayúscula o minúscula). ¿Qué debería devolver la función? ¿El carácter leído o un bool?. Aplique esta función en la solución del ejercicio 13 (Renta bruta y neta) de la relación de problemas II, para leer si una persona es pensionista o si es autónomo.
[Ejercicio 5 resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio5.cpp)

#####6. A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por hora. Si la cantidad de horas trabajadas es mayor de 40 horas, la tarifa por hora se incrementa en un 50 % para las horas extras (las que haya por encima de 40). Construir una función que dado el número total de horas trabajadas y el precio por hora, devuelva el salario del trabajador.
[Ejercicio 6 resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio6.cpp)

#####11. Examen Septiembre 2014. Dos números amigos son dos números naturales a y b, tales que la suma de los divisores propios de a más uno es igual a b, y viceversa. Un ejemplo de números amigos es el par de naturales (220; 284), ya que:
	• Los divisores propios de 220 son 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110, que suman 283, y 283 + 1 = 284.
	• Los divisores propios de 284 son 2, 4, 71 y 142, que suman 219, y 219 + 1 = 220. Realice un programa que implemente estas dos tareas:
    
	a) En primer lugar debe leer dos números naturales e indicar si son o no amigos.
    
    b) A continuación leerá otro número natural, n, e informará si existe algún número amigo de n en el intervalo centrado en n y de radio 3. 

Utilice las funciones que estime oportuno.