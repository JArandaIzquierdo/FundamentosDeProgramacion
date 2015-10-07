### Fundamentos de Programacion
## Relacion de problemas Tema 1
##### 1. Indique cuáles serán los valores de las variables a y x después de ejecutar el código siguiente.
	 	a = 0;
     	i = 1;
     	x = 0;
     	a = a + i;
     	x = x + i / a;
     	a = a + i;
     	x = x + i / a;
     	a = a + i;
     	x = x + i / a;
     	a = a + i;
     	x = x + i / a;
        
a = 4

x = 1 + 1/2 + 1/3 + 1/4

##### 2. Crear un programa que pida un valor de intensidad y resistencia e imprima el voltaje correspondiente, según la Ley de Ohm:

		voltaje = intensidad * resistencia

[Ejercicio 2 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio2.cpp)

##### 3. Escriba un programa que lea por pantalla la cantidad en millas (como un real) y muestre la cantidad equivalente en kilómetros. Debe tener en cuenta que 1 milla equivale a 1'609 kilómetros.

[Ejercicio 3 Resuleto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio3.cpp)

##### 4. Realizar un programa que nos pida una longitud cualquiera dada en yardas. El programa deberá calcular el equivalente de dicha longitud en pulgadas, pies, millas y millas marinas, y mostrarnos los resultados en pantalla. Para el cálculo, utilice la siguiente tabla de conversión del sistema métrico:
	￼1 pulgada= 25,4 milímetros
	1 pie = 30,48 centímetros
	1 yarda = 0,9144 metros
	1 milla = 1609,344 metros
	1 milla marina = 1852 metros
￼￼￼￼￼￼￼
[Ejercicio 4 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio4.cpp)

##### 5. De http://countrymeters.info se obtienen los siguientes datos estimados sobre la población de China:
	• nace una persona cada 1.87 segundos
	• muere una persona cada 3.27 segundos
	• emigra una personada cada 71.9 segundos
##### Escriba un programa que muestre la población dentro de 2 años, considerando que la población actual es de 1.375.570.814 personas.

[Ejercicio 5 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio5.cpp)

##### 6. Un banco presenta la siguiente oferta. Si se deposita una cantidad de euros capital durante un año a plazo fijo, se dará un interés dado por la variable interes. Realizad un programa que lea una cantidad capital y un interés interes desde teclado y calcule en una variable total el dinero que se tendrá al cabo de un año, aplicando la fórmula:

					total = capital + capital ∗ (interes / 100)

##### Es importante destacar que el compilador primero evaluará la expresión de la parte derecha de la anterior asignación (usando el valor que tuviese la variable capital) y a continuación ejecutará la asignación, escribiendo el valor resultante de la expresión dentro de la variable total.
##### A continuación, el programa debe imprimir en pantalla el valor de la variable total. Tanto el capital como el interés serán valores reales. Supondremos que el usuario introduce el interés como un valor real entre 0 y 100, es decir, un interés del 5,4 % se introducirá como 5.4. También supondremos que lo introduce correctamente, es decir, que sólo introducirá valores entre 0 y 100.
#####Supongamos que queremos modificar la variable original capital con el nuevo valor de total. ¿Es posible hacerlo directamente en la expresión de arriba?

[Ejercicio 6 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio6.cpp)

##### 7. Escriba un programa que calcule el consumo de gasolina. Pedirá la distancia recorrida (en kms), los litros de gasolina consumidos y los litros que quedan en el depósito. El programa debe informar el consumo en km/litro, los litros/100 km y cuantos kilómetros de autonomía le restan con ese nivel de consumo. Utilice nombres de variables significativos.

[Ejercicio 7 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio7.cpp)

##### 8. Las ganancias de un determinado producto se reparten entre el diseñador y los tres fabricantes del mismo. Diseñar un programa que pida la ganancia total de la empresa (los ingresos realizados con la venta del producto) y diga cuánto cobran cada uno de ellos, sabiendo que el diseñador cobra el doble que cada uno de los fabricantes. El dato de entrada será la ganancia total a repartir. Utilizad el tipo double para todas las variables.

[Ejercicio 8 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio8.cpp)


##### 9. Queremos realizar un programa para intercambiar los contenidos de dos variables enteras. El programa leerá desde teclado dos variables edad_Pedro y edad_Juan e intercambiará sus valores. A continuación, mostrará en pantalla las variables ya modificadas. El siguiente código no funciona correctamente.
      edad_Pedro = edad_Juan;
      edad_Juan = edad_Pedro;
##### ¿Por qué no funciona? Buscad una solución.

[Ejercicio 9 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio9.cpp)

##### 10. Escribid un algoritmo para calcular la media aritmética muestral y la desviación es- tándar (o típica) muestral de las alturas de tres personas (n=3). Éstos valores serán reales (de tipo double). La fórmula general para un valor arbitrario de n es:

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-04%20a%20las%2021.11.59.png)
￼￼￼￼￼
##### X representa la media aritmética y σ la desviación estándar. Para resolver este pro- blema es necesario usar la función sqrt (raíz cuadrada) que se encuentra en la bi- blioteca cmath.
#####Estas medidas se utilizan mucho en Estadística para tener una idea de la distri- bución de datos. La media (mean en inglés) nos da una idea del valor central y la desviación típica (standard deviation) nos da una idea de la dispersión de és- tos. Ejecutad el programa con varios valores y comprobad que el resultado es co- rrecto utilizando una calculadora científica o cualquier calculadora online como por ejemplo la disponible en http://www.disfrutalasmatematicas.com/datos/ desviacion-estandar-calculadora.html

[Ejercicio 10 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio10.cpp)

##### 11. Cread un programa que nos pida la longitud del radio, calcule el área del círculo y la longitud de la circunferencia correspondientes, y nos muestre los resultados en pantalla. Recordad que:
		long. circunf = 2πr             área circ = πr2
##### Usad el literal 3.1416 a lo largo del código, cuando se necesite multiplicar por π.
##### Una vez hecho el programa, cambiad las apariciones de 3.1416 por 3.14159, re- compilad y ejecutad (La parte de compilación y ejecución se realizará cuando se vea en clase de prácticas el entorno de programación).
##### ¿No hubiese sido mejor declarar un dato constante PI con un valor igual a 3.14159, y usar dicho dato donde fuese necesario? Hacedlo tal y como se explica en las trans- parencias de los apuntes de clase.
##### Cambiad ahora el valor de la constante PI por el de 3.1415927, recompilad y ejecu- tad.

[Ejercicio 11 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio11.cpp)

#####12. Realizar un programa que lea los coeficientes reales μ y σ de una función gaussiana (ver definición abajo). A continuación el programa leerá un valor de abscisa x y se imprimirá el valor que toma la función en x

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-04%20a%20las%2021.11.59.png)

##### La función gaussiana es muy importante en Estadística. Es una función real de variable real en la que el parámetro μ se conoce como esperanza o media y σ como desviación típica (mean y standard deviation en inglés). En la gráfica de abajo pueden verse algunos ejemplos de esta función con distintos parámetros.

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-05%20a%20las%2022.42.49.png)

##### Para definir la función matemática e usad la función exp de la biblioteca cmath. En la misma biblioteca está la función sqrt para calcular la raíz cuadrada. Para elevar un número al cuadrado se puede usar la función pow, que se utiliza en la siguiente forma:

		pow(base, exponente)
        
##### Comprobad que los resultados son correctos, usando cualquiera de las calculadoras disponibles en:
http://danielsoper.com/statcalc3/calc.aspx?id=54
https://www.easycalculation.com/statistics/normal-pdf.php

[Ejercicio 12 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio12.cpp)

##### 16. Calcular el número de segundos que hay entre dos instantes del mismo día.
##### Cada instante se caracteriza por la hora (entre 0 y 23), minuto (entre 0 y 59) y segundo (entre 0 y 59).
##### El programa leerá la hora, minuto y segundo del instante inicial, y la hora, minuto y segundo del instante final (supondremos que los valores introducidos son correctos) y mostrará el número de segundos entre ambos instantes.

[Ejercicio 16 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio16.cpp)