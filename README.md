# Controlador_Vergatario
Repositorio Oficial del Controlador Vergatario, desarrollado por el Centro de Desarrollo Tecnologico de Paraguana, conformado por las empresas Venezolana  de Telecomunicaciones CA (Vtelca), Venezolana de Industrias Tecnologica (VIT) y Orinoquia CA. En este archivo podras encontrar todas las funciones para la programacion del controlador Vergatario.

A continuacion, la descripcion de puertos del Controlador, esta misma esta de forma automatica al ejecutar
la funcion "puertos()" en el IDE:

==========================================================================================================
ENTRADAS DIGITALES  
==========================================================================================================
in0 
in1 
in2 
in3 
in4
in5
in6
in7
in8
in9
in10
in11
in12
in13
in14
in15
in16
in17
in18
in19 
in20 
in21 
in22 
in23
==========================================================================================================
ENTRADAS ANALOGICAS DE CORRIENTE
==========================================================================================================
i0 
i1 
==========================================================================================================
ENTRADAS ANALOGICAS DE VOLTAJE
==========================================================================================================
v0 
v1
v2 
v3 
==========================================================================================================
SWITCHES DE CONTROL INTEGRADOS
==========================================================================================================
dip0
dip1
dip2
dip3
==========================================================================================================
SALIDAS DIGITALES
==========================================================================================================
q0
q1
q2
q3
q4
q5
q6
q7
=========================================================================================================
SALIDAS DE PWM
=========================================================================================================
p0
p1
=========================================================================================================
SALIDAS A RELE
=========================================================================================================
r0
r1
r2
r3
r4
r5
r6
r7
=========================================================================================================

Funciones relacionadas con digital I/O
--------------------------------------

e(int pin);
Configura un pin como entrada(Debe seleccionar un pin).

s(int pin);
Configura un pin como salida(Debe seleccionar un pin).

on(int pin);
Enciende un pin digital(Debe seleccionar un pin).

off(int pin);
Apaga un pin digital(Debe seleccionar un pin).

escribir(int pin, bool value);
Parámetros:
 - pin: El número del pin de salida Digital.
 - value: Valor digital (HIGH o LOW) en un pin.

leer(int pin);
Lee y muestra el valor de un pin digital.

Puertos()
Configura todos los pines de entrada y salida del controlador para su respectivo uso
Nota: Esta función debe ser llamada en la función setup() para habilitar



Funciones relacionadas con Analog I/O
--------------------------------------

leerA(int pin);
Lee el valor de una entrada analógica(Debe seleccionar un pin).
Retorna: El valor leído de la entrada analógica.


referenciaA(int type);
Establece la referencia de voltaje para las conversiones analógicas.
Parámetros:
  - type: El tipo de referencia (DEFAULT, INTERNAL, INTERNAL1V1, INTERNAL2V56, EXTERNAL).

  
pwm(int pin, int valor);
Escribe un valor analógico (0-255) en un pin de salida analógica (PWM).
Parámetros:
  - pin: El número del pin de salida analógica.
  - valor: El valor analógico a escribir (0-255).


initSerial();
Inicializa la comunicación serial para la comunicación con el puerto serial.
Nota: Esta función debe ser llamada en la función setup() para habilitar la comunicación serial.


pintar();

Escribe un mensaje en el SerialMonitor
Nota: Para poder utilizarlo debe inicializar initSerial. Ademas debe estar entre comillas("") 
el mensaje que se quiera pintar:  

pintar("Hola Mundo");


Funciones relacionadas con el tiempo
-------------------------------------

retraso(unsigned long milisegundos);
Genera un retraso en milisegundos.
Parámetros:
  - milisegundos: La duración del retraso en milisegundos.



retrasoSe(int seconds);
Genera un retraso en segundos.
Parámetros:
  - seconds: La duración del retraso en segundos.



retrasoMili(unsigned long valor);
Genera un retraso en microsegundos.
Parámetros:
  - valor: La duración del retraso en microsegundos.



microSegundos();
Retorna el número de microsegundos desde que comenzó la ejecución del programa.
Retorna: El número de microsegundos transcurridos.



miliSegundos();
Retorna el número de milisegundos desde que comenzó la ejecución del programa.
Retorna: El número de milisegundos transcurridos.




Funciones matemáticas
----------------------

absoluto(int num);
Calcula el valor absoluto de un número entero.
Parámetros:
  - num: El número entero para el cual se calculará el valor absoluto.
Retorna: El valor absoluto de num.



contraer(int num, int num2, int num3);
Limita un valor dentro de un rango dado.
Parámetros:
  - num: El valor que se desea limitar.
  - num2: El límite inferior del rango.
  - num3: El límite superior del rango.
Retorna: El valor de "num" limitado dentro del rango [num2, num3].



mapear(int value, int desbeAbajo, int desdeArriba, int paraAbajo, int paraArriba);
Mapea un valor desde un rango a otro.
Parámetros:
  - value: El valor que se desea mapear.
  - desbeAbajo: El valor mínimo del rango original.
  - desdeArriba: El valor máximo del rango original.
  - paraAbajo: El valor mínimo del nuevo rango.
  - paraArriba: El valor máximo del nuevo rango.
Retorna: El valor "value" mapeado al nuevo rango.



maximo(float a, float b);
Obtiene el máximo valor entre dos números flotantes.
Parámetros:
  - a: El primer número.
  - b: El segundo número.
Retorna: El mayor valor entre "a" y "b".



minimo(float a, float b);
Obtiene el mínimo valor entre dos números flotantes.
Parámetros:
  - a: El primer número.
  - b: El segundo número.
Retorna: El menor valor entre "a" y "b".



potencia(float a, float b);
Calcula la potencia de "a" elevado a la potencia "b".
Parámetros:
  - a: La base.
  - b: El exponente.
Retorna: "a" elevado a la potencia "b".



cuadrado(float a);
Calcula el cuadrado de un número flotante.
Parámetros:
  - a: El número para el cual se calculará el cuadrado.
Retorna: El cuadrado de "a".



raiz(float a);
Calcula la raíz cuadrada de un número flotante.
Parámetros:
  - a: El número para el cual se calculará la raíz cuadrada.
Retorna: La raíz cuadrada de "a".



Funciones relacionadas con números aleatorios
---------------------------------------------


iniciarAleatorio(unsigned long semilla);
Inicializa la generación de números aleatorios con una semilla específica.
Parámetros:
  - semilla: El valor de semilla para la generación aleatoria.

Nota: Esta función debe ser llamada en la función setup() para habilitar la funcion aleatorio.



aleatorio(int a, int b);
Genera un número aleatorio entre "a" y "b" (incluyendo "a" pero no "b").
Parámetros:
  - a: El límite inferior del rango de generación.
  - b: El límite superior del rango de generación.
Retorna: Un número aleatorio entre "a" y "b".



Funciones relacionadas con bits y bytes
----------------------------------------


bitLimpiar(int x, int n);

Limpia el n-ésimo bit en un número entero.
Parámetros:
  - x: El número en el que se limpiará el bit.
  - n: La posición del bit a limpiar (0-7).
Retorna: El número con el bit n-ésimo limpiado.



bitL(int x, int n);
Lee el n-ésimo bit en un número entero.
Parámetros:
  - x: El número del que se leerá el bit.
  - n: La posición del bit a leer (0-7).
Retorna: El valor del bit n-ésimo.



bitC(int x, int n);
Coloca el n-ésimo bit en un número entero.
Parámetros:
  - x: El número en el que se colocará el bit.
  - n: La posición del bit a colocar (0-7).
Retorna: El número con el bit n-ésimo colocado.



bitE(int x, int n, int y);
Escribe un valor en el n-ésimo bit de un número entero.
Parámetros:
  - x: El número en el que se escribirá el bit.
  - n: La posición del bit a escribir (0-7).
  - y: El valor a escribir en el bit (0 o 1).
Retorna: El número con el bit n-ésimo modificado.



altoByte(byte x);
Obtiene el byte alto de un valor de 16 bits.
Parámetros:
  - x: El valor de 16 bits del que se obtendrá el byte alto.
Retorna: El byte alto del valor.



bajoByte(byte x);
Obtiene el byte bajo de un valor de 16 bits.
Parámetros:
  - x: El valor de 16 bits del que se obtendrá el byte bajo.
Retorna: El byte bajo del valor.



Funciones trigonométricas
-------------------------

coseno(float a);
Calcula el coseno de un ángulo en radianes.
Parámetros:
  - a: El ángulo en radianes.
Retorna: El valor del coseno del ángulo.



seno(float a);
Calcula el seno de un ángulo en radianes.
Parámetros:
  - a: El ángulo en radianes.
Retorna: El valor del seno del ángulo.



tangente(float a);
Calcula la tangente de un ángulo en radianes.
Parámetros:
  - a: El ángulo en radianes.
Retorna: El valor de la tangente del ángulo.



Funciones relacionadas con caracteres
-------------------------------------

esAlpha(char dato);
Verifica si un carácter es una letra alfabética.

esAlphaNum(char valor);
Verifica si un carácter es alfanumérico.

esAscii(char valor);
Verifica si un carácter es un carácter ASCII.

esControl(char valor);
Verifica si un carácter es un carácter de control.

esDigito(float valor);
Verifica si un valor es un dígito.

esGraphic(char valor);
Verifica si un carácter es un carácter gráfico.

esHexDigit(char valor);
Verifica si un carácter es un dígito hexadecimal.

esMinuscula(char valor);
Verifica si un carácter es una letra minúscula.

esPintable(char valor);
Verifica si un carácter es imprimible.

esPuntuacion(char valor);
Verifica si un carácter es un signo de puntuación.

esEspacio(char valor);
Verifica si un carácter es un espacio.

esMayuscula(char valor);
Verifica si un carácter es una letra mayúscula.

esEspacioBlanco(char valor);
Verifica si un carácter es un espacio en blanco.


Funciones relacionadas con interrupciones
----------------------------------------

interrumpir();
Habilita las interrupciones. Las interrupciones son habilitadas por defecto al inicio del programa.

noInterrumpir();
Deshabilita las interrupciones. Esto evita que las interrupciones interrumpan la ejecución del programa.
