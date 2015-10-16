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

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-05%20a%20las%2022.42.38.png)

##### Para definir la función matemática e usad la función exp de la biblioteca cmath. En la misma biblioteca está la función sqrt para calcular la raíz cuadrada. Para elevar un número al cuadrado se puede usar la función pow, que se utiliza en la siguiente forma:

		pow(base, exponente)
        
##### Comprobad que los resultados son correctos, usando cualquiera de las calculadoras disponibles en:
http://danielsoper.com/statcalc3/calc.aspx?id=54
https://www.easycalculation.com/statistics/normal-pdf.php

[Ejercicio 12 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio12.cpp)

##### 13. En atletismo se expresa la rapidez de un atleta en términos de ritmo (minutos y segundos por kilómetro) más que en unidades de velocidad (kilómetros por hora).
##### Escribid dos programas para convertir entre estas dos medidas:
a) El primero leerá el ritmo (minutos y segundos, por separado) y mostrará la velocidad (kilómetros por hora).
b) El segundo leerá la velocidad (kilómetros por hora) y mostrará el ritmo (minutos y segundos).

[Ejercicio 13 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio13.cpp)

##### 14. Escribir un programa que lea un valor entero. Supondremos que el usuario introduce siempre un entero de tres dígitos, como por ejemplo 351. Escribid en pantalla los dígitos separados por tres espacios en blanco. Con el valor anterior la salida sería:
		3  5  1
        
[Ejercicio 14 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio14.cpp)



##### 15. Leed desde teclado tres variables correspondientes a un número de horas, minutos y segundos, respectivamente. Diseñar un algoritmo que calcule las horas, minutos y segundos dentro de su rango correspondiente. Por ejemplo, dadas 10 horas, 119 minutos y 280 segundos, debería dar como resultado 12 horas, 3 minutos y 40 segundos. El programa no calculará meses, años, etc sino que se quedará en los días.
##### Como consejo, utilizad el operador / que cuando trabaja sobre datos enteros, representa la división entera. Para calcular el resto de la división entera, usad el operador %.

[Ejercicio 15 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio15.cpp)

##### 16. Calcular el número de segundos que hay entre dos instantes del mismo día. Cada instante se caracteriza por la hora (entre 0 y 23), minuto (entre 0 y 59) y segundo (entre 0 y 59). El programa leerá la hora, minuto y segundo del instante inicial, y la hora, minuto y segundo del instante final (supondremos que los valores introducidos son correctos) y mostrará el número de segundos entre ambos instantes.

[Ejercicio 16 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio16.cpp)

##### 17. Realizar un programa que declare las variables x, y y z, les asigne los valores 10, 20 y 30 e intercambien entre sí sus valores de forma que el valor de x pasa a y, el de y pasa a z y el valor de z pasa a x (se pueden declarar variables auxiliares aunque se pide que se use el menor número posible).

[Ejercicio 17 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio17.cpp)

##### 18. Realizad el ejercicio del reparto de la ganancia de un producto, pero cambiando el tipo de dato de la ganancia total a int (el resto de variables siguen siendo double).

[Ejercicio 18 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio18.cpp)


##### 19. Realizad el ejercicio del cálculo de la desviación típica, pero cambiando el tipo de dato de las variables xi a int.
##### Nota: Para no tener problemas en la llamada a la función pow (en el caso de que se haya utilizado para implementar el cuadrado de las diferencias de los datos con la media), obligamos a que la base de la potencia sea un real multiplicando por 1.0, por lo que la llamada quedaría en la forma pow(basex1.0, exponente).

[Ejercicio 19 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio19.cpp)

##### 20. Diseñar un programa que lea un carácter (supondremos que el usuario introduce una mayúscula), lo pase a minúscula y lo imprima en pantalla. Hacedlo sin usar las funciones toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse la equivalencia en C++ entre los tipos enteros y caracteres.

[Ejercicio 20 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio20.cpp)


##### 21. Supongamos el siguiente código:
```c++
      nt entero;
      char caracter;
      caracter = '7';
      entero = caracter;

```
#####La variable entero almacenará el valor 55 (el orden en la tabla ASCII del carácter '7'). Queremos construir una expresión que devuelva el entero 7, para asignarlo a la variable entero. 
######Formalmente:
#####Supongamos una variable car de tipo carácter que contiene un valor entre '0' y '9'. Construid un programa que obtenga el correspondiente valor entero, se lo asigne a una variable de tipo int llamada entero y lo imprima en pantalla. Por ejemplo, si la variable car contiene '7' queremos asignarle a entero el valor numérico 7.
#####Nota. La comilla simple para representar un literal de carácter es la que hay en el teclado del ordenador debajo de la interrogación ?.

[Ejercicio 21 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio21.cpp)


#####22. Dadas las variables count = 0, limit = 10, x = 2, y = 7, calcule el valor de las siguientes expresiones lógicas
```c++
	count == 0 && limit < 20
    limit > 20 || count < 5
    !(count == 12)
    count == 1 && x < y
    !( (count < 10 || x < y) && count >= 0 )
    (count > 5 && y == 7) || (count <= 0 && limit == 5*x)
    !( limit != 10 && z > y )
```

[Ejercicio 22 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio22.cpp)

#####23. Razonar sobre la falsedad o no de las siguientes afirmaciones: 
	a) 'c' es una expresión de caracteres.
	b) 4<3 es una expresión numérica.
    c) (4+3)<5 es una expresión numérica.
	d) cout << a; da como salida la escritura en pantalla de una a. 
    e) ¿Qué realiza cin >> cte, siendo cte una constante entera?
    
    
[Ejercicio 23 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio23.cpp)
    
#####24. Indicar si se produce un problema de precisión o de desbordamiento en los siguientes ejemplos indicando cuál sería el resultado final de las operaciones.
#####Nota. Si se desea ver el contenido de una variable real con cout, es necesario que antes de hacerlo, se establezca el número de decima- les que se quieren mostrar en pantalla. Hacedlo escribiendo la sentencia cout.precision(numero_digitos); en cualquier sitio del programa antes de la ejecución de cout << real1 << "," << real2;. Hay que destacar que al trabajar con reales siempre debemos asumir representaciones aproximadas por lo que no podemos pensar que el anterior valor numero_digitos esté indicando un número de decimales con representación exacta.

a)
```c++
	int chico, chico1, chico2;
    chico1 = 123456789;
	chico2 = 123456780;
    chico = chico1 * chico2;
```

b)
```c++
	long grande;
	int chico1, chico2;
    chico1 = 123456789;
    chico2 = 123456780;
    grande = chico1 * chico2;
```
c)

```c++
	double resultado, real1, real2;
    real1 = 123.1;
    real2 = 124.2;
    resultado = real1 * real2;
```
d)
```c++    
	double resultado, real1, real2;
    real1 = 123456789.1;
	real2 = 123456789.2;
    resultado = real1 * real2;
```
e)
```c++
    
	double real, otro_real;
    real = 2e34;
    otro_real = real + 1;
    otro_real = otro_real - real;
```
f)

```c++
	double real, otro_real; 
    real = 1e+300;
    otro_real = 1e+200;
    otro_real = otro_real * real;
```
g)
```c++
	float chico; 
	double grande;
    grande = 2e+150;
    chico = grande;
```

[Ejercicio 24 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio24.cpp)

#####25. Escribid una expresión lógica que sea verdadera si una variable de tipo carácter llamada letra es una letra minúscula y falso en otro caso.
#####Escribid una expresión lógica que sea verdadera si una variable de tipo entero llamada edad es menor de 18 o mayor de 65.
#####Escribid una expresión lógica que nos informe cuando un año es bisiesto. Los años bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o bien son divisibles por 400.
#####Escribid un programa que lea las variables letra, edad y anio, calcule el valor de las expresiones lógicas anteriores e imprima el resultado. Tened en cuenta que cuando se imprime por pantalla (con cout) una expresión lógica que es true, se imprime 1. Si es false, se imprime un 0. En el tema 2 veremos la razón.

[Ejercicio 25 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio25.cpp)

#####26. Indique qué tipo de dato usaría para representar:
	• Edad de una persona
	• Producto interior bruto de un país. Consultad: http://es.wikipedia.org/wiki/Anexo:Pa%C3%ADses_por_PIB_ (nominal)
	• La cualidad de que un número entero sea primo o no.
	• Estado civil (casado, soltero, separado, viudo)
	• Sexo de una persona (hombre o mujer exclusivamente)

[Ejercicio 26 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio26.cpp)


#####27. El precio final de un automóvil para un comprador es la suma total del costo del vehículo, del porcentaje de ganancia de dicho vendedor y del I.V.A. Diseñar un algoritmo para obtener el precio final de un automóvil sabiendo que el porcentaje de ganancia de este vendedor es del 20 % y el I.V.A. aplicable es del 16 %.

[Ejercicio 27 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio27.cpp)

#####28. Cread un programa que lea un valor de temperatura expresada en grados Celsius y la transforme en grados Fahrenheit. Para ello, debe considerar la fórmula siguiente:
	Grados Fahrenheit = (Grados Celsius * 180 / 100) + 32
#####Buscad en Internet el por qué de dicha fórmula.

[Ejercicio 28 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio28.cpp)


#####29. Cread un programa que lea las coordenadas de dos puntos P1 = (x1, y1) y P2 = (x2, y2) y calcule la distancia euclídea entre ellos:

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-16%20a%20las%2016.48.01.png)

#####Para calcular el cuadrado no puede usar ninguna función de la biblioteca cmath.

[Ejercicio 29 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio29.cpp)

#####30. Declarar las variables necesarias y traducir las siguientes fórmulas a expresiones válidas del lenguaje C++.

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-16%20a%20las%2016.48.01.png)


[Ejercicio 30 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio30.cpp)

#####31. Dos locomotoras parten de puntos distintos avanzando en dirección contraria sobre la misma vía. Se pide redactar un programa para conocer las distancias que habrán recorrido ambas locomotoras antes de que choquen teniendo en cuenta que la primera locomotora viaja a una velocidad constante V1, que la segunda viaja a una velocidad constante V2, la fórmula que relaciona velocidad, espacio y tiempo (s = v t) y que el momento en que se producirá el choque viene dado por la fórmula:

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-16%20a%20las%2016.51.35.png)

#####dónde D es la distancia que separa los puntos iniciales de partida. Los datos de entrada al programa serán D, V1 y V2.

[Ejercicio 31 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio31.cpp)

#####32. El área A de un triángulo se puede calcular a partir del valor de dos de sus lados, a y￼￼￼￼￼￼b, y del ángulo θ que éstos forman entre sí con la fórmula A = 1/2 a*b *sin (θ). Construid un programa que pida al usuario el valor de los dos lados (en centímetros), el ángulo que éstos forman (en grados), y muestre el valor del área.

![](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/images/Captura%20de%20pantalla%202015-10-16%20a%20las%2017.02.58.png)

#####Tened en cuenta que el argumento de la función sin va en radianes por lo que habrá que transformar los grados del ángulo en radianes (recordad que 360 grados son 2Π radianes).

[Ejercicio 32 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio32.cpp)

#####33. Los compiladores utilizan siempre el mismo número de bits para representar un tipo de dato entero (este número puede variar de un compilador a otro). Por ejemplo, 32 bits para un int. Pero, realmente, no se necesitan 32 bits para representar el 6, por ejemplo, ya que bastarían 3 bits:
	6 = 1∗22 +1∗21 +0∗20 ≡ 110
#####Se pide crear un programa que lea un entero n, y calcule el mínimo número de dígitos que se necesitan para su representación. Para simplificar los cómputos, suponed que sólo queremos representar valores enteros positivos (incluido el cero). Consejo: se necesitará usar el logaritmo en base 2 y obtener la parte entera de un real (se obtiene tras el truncamiento que se produce al asignar un real a un entero).

[Ejercicio 33 Resuelto](https://github.com/JArandaIzquierdo/FundamentosDeProgramacion/blob/master/Ejercicios/EjerciciosTema1/Ejercicio33.cpp)