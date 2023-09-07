#ifndef CDT_H
#define CDT_H
#include <Arduino.h>

//declarando variables
const int in0 = 2;
const int in1 = 22;
const int in2 = 23;
const int in3 = 24;
const int in4 = 25;
const int in5 = 26;
const int in6 = 27;
const int in7 = 28;
const int in8 = 29;
const int in9 = 30;
const int in10 = 31;
const int in11 = 32;
const int in12 = 33;
const int in13 = 34;
const int in14 = 35;
const int in15 = 36;
const int in16 = 37;
const int in17 = 38;
const int in18 = 39;
const int in19 = 40;
const int in20 = 41;
const int in21 = 42;
const int in22 = 60;
const int in23 = 61;
const int dip0 = 66;
const int dip1 = 67;
const int dip2 = 68;
const int dip3 = 69;
const int q0 = 3;
const int q1 = 4;
const int q2 = 5;  
const int q3 = 6;
const int q4 = 7;
const int q5 = 8;
const int q6 = 9;
const int q7 = 10;
const int r0 = 13;
const int r1 = 43;
const int r2 = 44;
const int r3 = 45;
const int r4 = 46;
const int r5 = 47;
const int r6 = 48;
const int r7 = 49;
//ultimas agregadas
const int i0=54;
const int i1=55;
const int v0 = 56;
const int v1=57;
const int v2=58;
const int v3= 59;
const int p0=11;
const int p1=12;

//puertos
void puertos();

//digitalIO
void e(int pin);
void s(int pin);
void on(int pin);
void off(int pin);
void escribir(int pin, bool value);
int leer(int pin);

//Analog I/O
int leerA(int pin);
void referenciaA(int type);
void pwm(int pin, int valor);
void initSerial(int frecuencia);
void pintar(char frase);
void pintarLn(char frase);

//tiempo
void retraso(unsigned long milisegundos);
void retrasoSe(int seconds);
void retrasoMili(unsigned long valor);
void microSegundos();
void miliSegundos();


//Math
int absoluto(int num);
int contraer(int num, int num2, int num3);
int mapear(int value, int desbeAbajo, int desdeArriba, int paraAbajo, int paraArriba);
float maximo(float a, float b);
float minimo(float a, float b);
float potencia(float a, float b);
float cuadrado(float a);
float raiz(float a);

//Random
void iniciarAleatorio(unsigned long semilla);
void aleatorio(int a, int b);

//Bits and bytes
int bitLimpiar(int x, int n);
int bitL(int x, int n);
int bitC(int x, int n);
int bitE(int x, int n, int y);
int altoByte(byte x);
int bajoByte(byte x);

//Trigonometry
float coseno(float a);
float seno(float a);
float tangente(float a);

//Advanced I/O
void noTono(int pin);
int pulsoIn(int pin, int valor, int tiempo);
int pulsoEnLargo(int pin, int valor, int tiempo);
void shiftln (int pin, int tiempo, uint8_t bits);

//Characters
void esAlpha(char dato);
void esAlphaNum(char valor);
void esAscii(char valor);
void esControl(char valor);
void esDigito(float valor);
void esGraphic(char valor);
void esHexDigit(char valor);
void esMinuscula(char valor);
void esPintable(char valor);
void esPuntuacion(char valor);
void esEspacio(char valor);
void esMayuscula(char valor);
void esEspacioBlanco(char valor);

//Interrupts
void interrumpir();
void noInterrumpir();

//Estructuras de control

// void mientras(bool condicion, void (*cuerpo)());
// void si(bool condicion, void (*entonces)());



#endif
