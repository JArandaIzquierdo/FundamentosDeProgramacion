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