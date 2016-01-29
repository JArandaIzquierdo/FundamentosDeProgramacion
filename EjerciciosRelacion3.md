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

#####Utilice las funciones que estime oportuno.

[Ejercicio 11 resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio11.cpp)

#####15.En este ejercicio se plantean varias modificaciones. Debe entregar un fichero cpp por cada uno de los apartados.
#####Se desea implementar una clase Recta para representar una recta en el plano. Una rectavienedeterminadaportrescoeficientesA, B, C,deformaquetodoslospuntos (x,y) que pertenecen a la recta verifican lo siguiente (ecuación general de la recta):
	Ax + By + C = 0
#####a) Definición de la clase y creación de objetos
#####Defina la clase Recta. En este apartado utilice únicamente datos miembro públicos. Cree un programa principal que haga lo siguiente:
	• Defina dos objetos de la clase Recta.
	• Lea seis reales desde teclado.
	• Le asigne los tres primeros a los coeficientes de una recta y los otros tres a la 	segunda recta.
	• Calcule e imprima la pendiente de cada recta aplicando la fórmula: pendiente = - A 		/B
[Ejercicio 15A resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio15A.cpp)

#####b) Métodos públicos
#####En vez de calcular la pendiente en el programa principal, vamos a ponerlo como un método de la clase y así lo reutilizaremos todas las veces que necesitemos. Añada un método para el cálculo de la pendiente y modificad el main para tener en cuenta este cambio.
#####¿Añadimos pendiente como dato miembro de la recta? La respuesta es que no ¿Por qué?
#####Añadir también los siguiente métodos:
	• Obtener la ordenada (y) dado un valor de abscisa x, aplicando la fórmula: (-C -xA) / 	B
	• Obtener la abscisa (x) dado un valor de ordenada y, aplicando la fórmula: (-C -yB) / 	A
#####En la función main leed un valor de abscisa e imprimir la ordenada según la recta y leed un valor de ordenada e imprimid la abscisa que le corresponde. Hacedlo sólo con la primera recta.

[Ejercicio 15B resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio15B.cpp)

#####c) Datos miembro privados
#####Cambie ahora los datos miembro públicos y póngalos privados. Tendrá que añadir métodos para asignar y ver los valores de los datos miembro. Añada métodos para asignar un valor a cada uno de los tres datos miembro. Modifique el main para tener en cuenta estos cambios.

[Ejercicio 15C resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio15C.cpp)

#####d)Política de acceso a los datos miembros
#####En vez de usar un método para asignar un valor a cada dato miembro, defina un único método SetCoeficientes para asignar los tres a la misma vez.
#####Observad que los métodos permiten definir la política de acceso a los datos miembro. Si tengo previsto cambiar por separado los coeficientes de la recta, usaré métodos de asignación individuales. En caso contrario, usaré un único mé- todo que modifique a la misma vez todos los datos miembro. Incluso pueden dejarse en la clase ambos tipos de métodos para que así el cliente de la clase pueda usar los que estime oportunos en cada momento. Por ahora, mantenga únicamente el método de asignación en bloque SetCoeficientes.

[Ejercicio 15D resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio15D.cpp)


#####e)Constructor
#####Modifique el programa principal del último apartado e imprima los valores de los datos miembros de una recta, antes de asignarles los coeficientes. Mostrará, ob- viamente, un valor indeterminado. Para evitar este problema, añada un construc- tor a la recta para que el objeto esté en un estado válido en el mismo momento de su definición. El constructor deberá tener como parámetros, obligatoriamente, los tres coeficientes de la recta. Tendrá que modificar convenientemente el main para tener en cuenta este cambio.

[Ejercicio 15E resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio15E.cpp)

#####f)Política de acceso a los datos miembro
#####Suprima ahora el método SetCoeficientes. De esta forma, una vez creado el objeto (pasándole los datos apropiados en el constructor) ya no podremos modificar los datos miembro. Esto es útil en aquellas situaciones en las que no queremos permitir que el estado del objeto cambie, una vez se ha creado.

[Ejercicio 15F resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio15F.cpp)

#####g)Métodos privados
#####Añada un método privado que nos indique si los coeficientes son correctos, es decir, A y B no pueden ser simultáneamente nulos. Llame a este método en el constructor y en el método SetCoeficientes y realice las operaciones que estime oportuno en el caso de que los coeficientes pasados como parámetros no sean correctos.

[Ejercicio 15G resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio15G.cpp)