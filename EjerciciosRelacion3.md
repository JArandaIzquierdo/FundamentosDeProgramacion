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

#####Definir la clase AlumnoFP, que almacene el nombre, el primer apellido, el DNI del alumno y cada una de las partes consideradas en la evaluación de la asignatura: teo- ría, parcial_pract1, parcial_pract2, participación_clase. La escala utilizada para eva- luar cada parte es de 0 a 10.
	• Construir los constructores necesarios para poder asignar valores a los miembros de la clase.
	• Construir un método que calcule la nota final del alumno. Para ello se debe de tener en cuenta los porcentajes de las distintas partes consideradas: 70 % teoría, 5 % parcial 1, 15 % parcial 2 y 10 % participación.
	• Construir un método que calcule la nota final del alumno.
	• Construir un programa que lea los datos del alumno y en caso de haber obtenido una nota inferior a 5 en alguna de las partes que indique la nota obtenida en dicha parte.

[Ejercicio 16 resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio16.cpp)

#####21. Recuperad la solución del ejercicio 15 (recta) de esta relación de problemas. Se pide crear un programa principal que haga lo siguiente:
	• Se presentará al usuario un menú principal para salir del programa o para intro- ducir los valores de los coeficientes A, B, C de la recta.
	• Una vez introducidos los coeficientes se presentará al usuario un segundo menú, para que elija alguna de las siguiente opciones:
	– Mostrar el valor de la pendiente de la recta.
	– Motrar la ordenada dada una abscisa (el programa tendrá que pedir la abscisa)
	– Mostrar la abscisa dada una ordenada (el programa tendrá que pedir la or- denada)
	– Volver al menú principal.

[Ejercicio 21 resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio21.cpp)

#####22. Se quiere construir una clase Nomina para realizar la funcionalidad descrita en el ejercicio 18 de la relación de problemas I sobre la nómina del fabricante y diseñador (página RP-I.6). Cread los siguientes programas (entregad un fichero por cada uno de los apartados):
#####a) Suponed que sólo gestionamos la nómina de una empresa en la que hay un fabri- cante y tres diseñadores. Los salarios brutos se obtienen al repartir los ingresos de la empresa, de forma que el diseñador cobra el doble de cada fabricante.
#####El programa leerá el valor de los ingresos totales y calculará los salarios brutos de los fabricantes y diseñador, llamando a los métodos oportunos de la clase Nomina.

[Ejercicio 22A resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio22A.cpp)

#####b) Supongamos que se aplica una retención fiscal y que ésta es la misma para los fabricantes y el diseñador. En el constructor se establecerá el porcentaje de retención fiscal (de tipo double) y posteriormente no se permitirá que cambie, de forma que todas las operaciones que se hagan serán siempre usando la misma retención fiscal. Los salarios netos se obtienen al aplicar la retención fiscal a los salarios brutos (después de repartir los ingresos totales de la empresa):
       salario_neto = salario_bruto - salario_bruto * retencion_fiscal / 100.0

[Ejercicio 22B resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion3/Ejercicio22B.cpp)

#####c) Supongamos que gestionamos las nóminas de varias sucursales de una empre- sa. Queremos crear objetos de la clase Nomina que se adapten a las caracterís- ticas de cada sucursal:
	• En cada sucursal hay un único diseñador pero el número de fabricantes es distinto en cada sucursal. Por tanto, el número de fabricantes habrá que es- pecificarlo en el constructor y posteriormente no podrá cambiarse.

	• La forma de repartir el dinero es la siguiente: el diseñador se lleva una parte del total y el resto se reparte a partes iguales entre los fabricantes. En los apartados anteriores, por ejemplo, la parte que se llevaba el diseñador era 2/5 y el resto (3/5) se repartía entre los tres fabricantes. La parte que el di- señador se lleva puede ser distinta entre las distintas sucursales (2/5, 1/6, etc), pero no cambia nunca dentro de una misma sucursal. Por tanto, el por- centaje de ganancia (2/5, 1/6, etc) habrá que especificarlo en el constructor y posteriormente no podrá cambiarse.
    
    • Lasretencionesfiscalesdelosfabricantesydiseñadorsondistintas.Además, se prevé que éstas puedan ir cambiando durante la ejecución del programa. Por lo tanto, no se incluirán como parámetros en el constructor.

#####El programa leerá los siguientes datos desde un fichero externo:
	• El número de sucursales.
	• Los siguientes valores por cada una de las sucursales:
		– Ingresos totales a repartir
		– Número de fabricantes
		– Parte que se lleva el diseñador
		– Retención fiscal del diseñador
		– Retención fiscal de los fabricantes
        
#####Por ejemplo, el siguiente fichero indica que hay dos sucursales. La primera tiene unos ingresos de 300 euros, 3 fabricantes, el diseñador se lleva 1/6, la retención del diseñador es del 20 % y la de cada fabricante un 18 %. Los datos para la segunda son 400 euros, 5 fabricantes, 1/4, 22 % y 19 %.
	
          2
          300 3 6 20 18
          400 5 4 22 19
#####El programa tendrá que imprimir los salarios brutos y netos del diseñador y de los fabricantes por cada una de las sucursales, llamando a los métodos oportunos de la clase Nomina.