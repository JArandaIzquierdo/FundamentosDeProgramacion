###Fundamentos de Programacion

##Relacion de problemas 2. Estructuras de control

#####1. (Parking Madrid)
#####La tabla para el cálculo del precio a pagar en los parkings de Madrid para el 2015 es la siguiente:
#####Desde el minuto 0 al 30: 0.0412 euros cada minuto Desde el minuto 31 al 90: 0.0370 euros cada minuto Desde el minuto 91 al 660: 0.0493 euros cada minuto Desde el minuto 661 hasta máximo 24 horas: 31.55 euros
#####Dado un tiempo de entrada y un tiempo de salida, construya un programa que calcule la tarifa final en euros a cobrar. Ejemplo: si el tiempo de permanencia es de 32 minutos, los primeros 30 minutos se facturan a 0.0412 el minuto y los 2 restantes a 0.0370.

[Ejercicio 1 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio1.cpp)

#####2. Ampliad el ejercicio 10 de la relación de problemas I, para que, una vez calculada la media y la desviación, el programa imprima por cada uno de los valores introducidos previamente, si está por encima o por debajo de la media. Por ejemplo:
     33 es menor que su media
     48 es mayor o igual que su media
     .....
#####Nota. Los valores introducidos son enteros, pero la media y la desviación son reales.

[Ejercicio 2 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio2.cpp)

#####3. Cread un programa que lea el valor de la edad (dato de tipo entero) y salario (dato de tipo real) de una persona. Subid el salario un 5% si éste es menor de 300 euros y la persona es mayor de 65 años.
#####¿Es mejor incluir otra variable nueva salario_final o es mejor modificar la variable que teníamos?
#####Imprimid el resultado por pantalla. En caso contrario imprimid el mensaje "No es aplicable la subida". En ambos casos imprimid el salario resultan- te.

[Ejercicio 3 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio3.cpp)

#####4. Realizar un programa en C++ que lea dos valores enteros desde teclado y diga si cualquiera de ellos divide o no (de forma entera) al otro. En este problema no hace falta decir quién divide a quién. Supondremos que los valores leídos desde teclado son ambos distintos de cero.

[Ejercicio 4 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio4.cpp)

#####5. Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si están ordenados (da igual si es de forma ascendente o descendente) o no lo están.

[Ejercicio 5 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio5.cpp)

#####6. Cread un programa que lea el número de un año e indique si es bisiesto o no. Un año es bisiesto si es múltiplo de cuatro, pero no de cien. Excepción a la regla anterior son los múltiplos de cuatrocientos que siempre son bisiestos. Por ejemplo, son bisiestos: 1600,1996, 2000, 2004. No son bisiestos: 1700, 1800, 1900, 1998, 2002.

[Ejercicio 6 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio6.cpp)

#####7. Se quiere leer un carácter letra_original desde teclado, y comprobar con una estructura condicional si es una letra mayúscula. En dicho caso, hay que calcu- lar la minúscula correspondiente almacenando el resultado en una variable llamada letra_convertida. En el caso de que no sea una mayúscula, le asignaremos a letra_convertida el valor que tenga letra_original. Finalmente, imprimire- mos en pantalla el valor de letra_convertida. No pueden usarse las funciones tolower ni toupper de la biblioteca cctype.

[Ejercicio 7 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio7.cpp)

#####8. Queremos modificar el ejercicio 7 para leer un carácter letra_original desde te- clado y hacer lo siguiente:
	• Si es una letra mayúscula, almacenaremos en la variable letra_convertida la correspondiente letra minúscula.
    
	• Si es una letra minúscula, almacenaremos en la variable letra_convertida la correspondiente letra mayúscula.
    
	• Si es un carácter no alfabético, almacenaremos el mismo carácter en la variable letra_convertida
#####El programa debe imprimir en pantalla el valor de letra_convertida e indicar si la letra introducida era una minúscula, mayúscula o no era una carácter alfabético. No pueden usarse las funciones tolower ni toupper de la biblioteca cctype.

[Ejercicio 8 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio8.cpp)

#####9. En clase de teoría se ha visto e implementado el siguiente ejemplo:
#####En un programa de ventas, si la cantidad vendida es mayor de 100 unidades, se le aplica un descuento del 3 %. Por otra parte, si el precio final de la venta es mayor de 700 euros, se aplica un descuento del 2 %. Ambos descuentos son acumulables.
#####Vamos a cambiar el criterio de los descuentos. Supondremos que sólo se aplicará el descuento del 2 % (por una venta mayor de 700 euros) cuando se hayan vendido más de 100 unidades, es decir, para ventas de menos de 100 unidades no se aplica el descuento del 2 % aunque el importe sea mayor de 700 euros.
#####Cambiar el programa visto en clase para incorporar este nuevo criterio.

[Ejercicio 9 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio9.cpp)

#####10. Cread un programa que lea el valor de la edad (dato de tipo entero) y salario (dato de tipo real) de una persona. Subid el salario un 4% si es mayor de 65 o menor de 35 años. Si además de cumplir la anterior condición, también tiene un salario inferior a 300 euros, se le subirá otro 3%.
#####Imprimid el resultado por pantalla.

[Ejercicio 10 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio10.cpp)

#####11. Modificad las soluciones de los ejercicios 3,4,5,6 para que no se mezclen E/S y C (entradas/salidas y cómputos) dentro de la misma estructura condicional.

[Ejercicio 11 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio11.cpp)


#####12. Modificad la solución al ejercicio 8 para que, dependiendo de cómo era la letra introducida, imprima en pantalla alguno de los siguientes mensajes:
	• La letra era una mayúscula. Una vez convertida es ... 
    • La letra era una minúscula. Una vez convertida es ... 
    • El carácter no era una letra.
#####Hágalo separando E/S y C

[Ejercicio 12 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio12.cpp)


#####13. Cread un programa que lea los datos fiscales da una persona, reajuste su renta bruta según el criterio que se indica posteriormente e imprima su renta neta final.
	• La renta bruta es la cantidad de dinero íntegra que el trabajador gana.
	• La retención fiscal es el tanto por ciento que el gobierno se queda.
	• La renta neta es la cantidad que le queda al trabajador después de quitarle el porcentaje de retención fiscal, es decir:
	Renta_neta = Renta_bruta - Renta_bruta * Retención final / 100
    
#####Los datos a leer son:
	• Si la persona es un trabajador autónomo o no • Si es pensionista o no
	• Estado civil
	• Renta bruta (total de ingresos obtenidos)
	• Retención inicial a aplicar.

#####La retención inicial se va a modificar ahora atendiendo al siguiente criterio:
	• Se baja 3 puntos la retención fiscal a los autónomos, es decir, si la retención inicial era de un 15 %, por ejemplo, la retención final a aplicar será de un 12 % (por lo que la renta neta final será mayor)
	• Para los no autónomos:
		– Se sube un punto la retención fiscal a todos los pensionistas, es decir, si la 			retención inicial era de un 13 %, por ejemplo, la retención final a aplicar será 		  de un 14 % (por lo que la renta neta final será menor)
		– Al resto de trabajadores (no autónomo y no pensionista) se le aplica a todos una 		primera subida lineal de dos puntos en la retención inicial.
#####Una vez hecha esta subida, se le aplica (sobre el resultado anterior) las si- guientes subidas adicionales, dependiendo de su estado civil y niveles de ingresos:
	◦ Se sube otros dos puntos la retención fiscal si la renta bruta es menor de 20.000 euros
	◦ Se sube otros 2.5 puntos la retención fiscal a los casados con renta bruta superior a 20.000 euros
	◦ Se sube otros tres puntos la retención fiscal a los solteros con renta bruta superior a 20.000 euros
#####Una vez calculada la retención final, habrá que aplicarla sobre la renta bruta para así obtener la renta final del trabajador.

[Ejercicio 13 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio13.cpp)

#####14. Modificad el ejercicio 5 para que el programa nos diga si los tres valores leídos están ordenados de forma ascendente, ordenados de forma descendente o no están ordenados. Para resolver este problema, se recomienda usar una variable de tipo enumerado.

[Ejercicio 14 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio14.cpp)

#####15. Para resolver el ejercicio 12 se podrían usar dos variables lógicas (es_mayuscula, es_minuscula), que nos proporcionen la distinción entre 4 casos distintos (VV, VF, FV, FF). Sin embargo, sólo queremos distinguir tres posibilidades, a sa- ber, es mayúscula, es minúscula y no es un carácter alfabético. Para ello, volved a resolver el ejercicio 8 sustituyendo las dos variables lógicas por un tipo enumerado adecuado.

[Ejercicio 15 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio15.cpp)

#####16. Una compañía aérea establece el precio del billete como sigue: en primer lugar se fija una tarifa base de 150 euros, la misma para todos los destinos. Si el destino está a menos de 200 kilómetros, el precio final es la tarifa inicial. Para destinos a más de 200 Km, se suman 10 céntimos por cada kilómetro de distancia al destino (a partir del Km 200). En una campaña de promoción se va a realizar una rebaja lineal de 15 euros a todos los viajes. Además, se pretenden añadir otras rebajas y se barajan las siguientes alternativas de políticas de descuento:
	a) Una rebaja del 3 % en el precio final, para destinos a más de 600Km.
	b) Una rebaja del 4 % en el precio final, para destinos a más de 1100Km. En este caso, no se aplica el anterior descuento.
	c) Una rebaja del 5 % si el comprador es cliente previo de la empresa.
#####Cread un programa para que lea el número de kilómetros al destino y si el billete corresponde a un cliente previo de la empresa. Calcular el precio final del billete con las siguientes políticas de descuento:
	• Aplicando c) de forma adicional a los descuentos a) y b)
	• Aplicando c) de forma exclusiva con los anteriores, es decir, que si se aplica c),
	no se aplicaría ni a) ni b)
    
[Ejercicio 16 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio16.cpp)


#####17. Vamos a modificar el ejercicio 4 de la siguiente forma. Queremos leer dos valores enteros desde teclado y, en el caso de que uno cualquiera de ellos divida al otro, el programa nos debe decir quién divide a quién.
	a) En primer lugar, resolved el ejercicio mezclando entradas, cómputos y salidas de resultados
	b) En segundo lugar, se pide resolver el ejercicio sin mezclar C/E,S. Para ello, se ofrecen varias alternativas. ¿Cual sería la mejor? Escoged una e implementar la solución.
		
        
        I) Utilizar un variable de tipo string de la forma siguiente:
        string quien_divide;
          .............
          if (a%b==0)
             quien_divide = "b divide a a" ;
          .............
          if (quien_divide == "b divide a a")
             cout << b << " divide a " << a;
         
         
         II) Utilizar dos variables lógicas de la forma siguiente:
          bool a_divide_b, b_divide_a;
          .............
          if (a%b==0)
             a_divide_b = true;
          .............
          if (a_divide_b)
             cout << a << "divide a " << b;
             
          
          III) Detectamos si se dividen o no y usamos otras dos variables que me indiquen quién es el dividendo y quién el divisor:
          bool se_dividen;
          int Divdo, Divsor;
          .............
          if (a%b==0){
             Divdo = a;
          .............
          if (se_dividen)
             cout << Dvsor << " divide a " << Dvdo;
#####Completar la solución elegida para contemplar también el caso en el que alguno de los valores introducidos sea cero, en cuyo caso, ninguno divide al otro.

[Ejercicio 17 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio17.cpp)

##Ejercicios sobre condicionales

#####18. Realizar un programa que lea desde teclado un entero tope e imprima en pantalla to- dos sus divisores propios. Para obtener los divisores, basta recorrer todos los enteros menores que el valor introducido y comprobar si lo dividen. A continuación, mejorar el ejercicio obligando al usuario a introducir un entero positivo, usando un filtro con un bucle post test (do while).

[Ejercicio 18 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio18.cpp)

#####19. Modifiquemos el ejercicio 6 del capital y los intereses de la primera relación. Supon- gamos ahora que se quiere reinvertir todo el dinero obtenido (el original C más los intereses producidos) en otro plazo fijo a un año y así, sucesivamente. Construid un programa para que lea el capital, el interés y un número de años N, y calcule e im- prima todo el dinero obtenido durante cada uno de los N años, suponiendo que todo lo ganado (incluido el capital original C) se reinvierte a plazo fijo durante el siguiente año. El programa debe mostrar una salida del tipo:
     Total en el año número 1 = 240
     Total en el año número 2 = 288
     Total en el año número 3 = 345.6
     ......................
     
[Ejercicio 19 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio19.cpp)

#####20. Sobre el mismo ejercicio del capital y los intereses, construid un programa para calcular cuántos años han de pasar hasta llegar a doblar, como mínimo, el capital inicial. Los datos que han de leerse desde teclado son el capital inicial y el interés anual.

[Ejercicio 20 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio20.cpp)

#####21. Se pide leer un carácter desde teclado, obligando al usuario a que sea una letra mayúscula. Para ello, habrá que usar una estructura repetitiva do while, de forma que si el usuario introduce un carácter que no sea una letra mayúscula, se le volverá a pedir otro carácter. Calculad la minúscula correspondiente e imprimidla en pantalla. No pueden usarse las funciones tolower ni toupperde la biblioteca cctype.

[Ejercicio 21 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio21.cpp)

#####22. Realizar un programa que lea enteros desde teclado y calcule cuántos se han intro- ducido y cual es el mínimo de dichos valores (pueden ser positivos o negativos). Se dejará de leer datos cuando el usuario introduzca el valor 0. Realizad la lectura de los enteros dentro de un bucle sobre una única variable llamada dato. Es importante controlar los casos extremos, como por ejemplo, que el primer valor leído fuese ya el terminador de entrada (en este caso, el cero).

[Ejercicio 22 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio22.cpp)

#####23. Ampliad el ejercicio 5 de la relación de problemas I.
#####Esta nueva versión del programa pedirá un valor de población y calculará cuántos años (enteros) transcurrirán hasta que la población estimada sea mayor o igual al valor dado.
#####Nota: Filtrar el valor de población introducido de manera que sea mayor que el de la población actual.

[Ejercicio 23 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio23.cpp)

#####24. Ampliad el ejercicio 16 de manera que se permita que los dos instantes puedan pertenecer a dos días distintos, pero eso sí, consecutivos.
#####Filtrar adecuadamente los datos leídos

[Ejercicio 24 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio24.cpp)


#####25. Ampliad el ejercicio 6. El programa pedirá los valorers de dos años y mostrará todos los años bisiestos comprendidos entre los dos valores dados.

[Ejercicio 25 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio25.cpp)

#####26. Realizar un programa que lea dos secuencias de enteros desde teclado y nos diga si todos los valores de la primera secuencia son mayores que todos los valores de la segunda secuencia.
#####Realizad la lectura de los enteros dentro de sendos bucles sobre una única variable llamada dato. El final de cada secuencia viene marcado cuando se lee el 0.

[Ejercicio 26 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio26.cpp)

#####27. En el ejercicio 14 de la Relación de Problemas I se pedía escribir un programa que le- yese un valor entero de tres dígitos e imprimiese los dígitos separados por un espacio en blanco. Haced lo mismo pero para un número entero arbitrario. Por ejemplo, si el número es 3519, la salida sería:
	3	5	1	9
#####En este ejercicio se pueden mezclar entradas y salidas con cómputos.

[Ejercicio 27 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio27.cpp)

#####28. Escribir un programa que lea dos números enteros, escriba en pantalla el menú que se muestra a continuación, lea la opción seleccionada y muestre el resultado de la operación indicada.
   ----------------
    I.  Introducir números
    S.  Suma
    P.  Producto
    M.  Máximo
    R.  SaliR
   ----------------
   #####Introduzca opción:
#####Observe que se permite realizar distintas operaciones (opciones S,P,M) con los mis- mos valores numéricos (los introducidos en la opción I)

[Ejercicio 28 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio28.cpp)


#####29. Se pide diseñar un programa para jugar a adivinar un número entre 1 y 100. El juego tiene que dar pistas de si el número introducido por el jugador está por encima o por debajo del número introducido. Como reglas de parada se consideran los siguientes dos casos:
#####a) se ha acertado b) se decide abandonar el juego (decida cómo quiere especificar esta opción)
#####Para poder generar números aleatorios en un rango determinado será necesario in- cluir las siguientes instrucciones:
```c++
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
   const int MIN = 1,MAX = 100;
   const NUM_VALORES = MAX-MIN + 1;
   int incognita;
   time_t tiempo;
   // Inicialización de la secuencia:
   srand(time(&tiempo));
   // Generación de un número aleatorio incognita:
   // MIN <= incognita <= MAX
   incognita = (rand() \% NUM_VALORES) + MIN;
   ```

#####La sentencia srand(time(&tiempo)) debe ejecutarse una única vez al principio del programa y sirve para inicializar la secuencia de nú- meros aleatorios. Posteriormente, cada vez que se ejecute la sentencia
#####incognita = (rand() \% NUM\_VALORES) + MIN; se obtendrá un va- lor aleatorio (pseudoaleatorio).
#####Realizar el mismo ejercicio pero permitiendo jugar tantas veces como lo desee el jugador.

[Ejercicio 29 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio29.cpp)

#####30. Una empresa que tiene tres sucursales decide llevar la contabilidad de las ven- tas de sus productos a lo largo de una semana. Para ello registra cada venta con tres números, el identificador de la sucursal (1, 2 o 3), el código del producto co- dificado como un carácter (a, b ó c) y el número de unidades vendidas. Dise- ñar un programa que lea desde el teclado una serie de registros compuestos por sucursal, producto, unidades y diga cuál es la sucursal que más produc- tos ha vendido. La serie de datos termina cuando la sucursal introducida vale -1. Por ejemplo, con la serie de datos

	2	a	20
    1	b	10
    1	b	4
    3	c	40
    1	a	1
    2	b	15
    1	a	1
    1	c	2
    2	b	6
    -1
    
#####Se puede ver que la sucursal que más productos ha vendido es la número 2 con 41 unidades totales. Para comprobar que el programa funciona correctamente, cread un fichero de texto y re-dirigid la entrada a dicho fichero.

[Ejercicio 29 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosRelacion2/Ejercicio29.cpp)