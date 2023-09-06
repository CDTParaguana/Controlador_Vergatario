#ifndef CDT_H
#define CDT_H
#include <Arduino.h>

//declarando variables
int in0 = 2;
int in1 = 22;
int in2 = 23;
int in3 = 24;
int in4 = 25;
int in5 = 26;
int in6 = 27;
int in7 = 28;
int in8 = 29;
int in9 = 30;
int in10 = 31;
int in11 = 32;
int in12 = 33;
int in13 = 34;
int in14 = 35;
int in15 = 36;
int in16 = 37;
int in17 = 38;
int in18 = 39;
int in19 = 40;
int in20 = 41;
int in21 = 42;
int in22 = 60;
int in23 = 61;
int dip0 = 66;
int dip1 = 67;
int dip2 = 68;
int dip3 = 69;
int q0 = 3;
int q1 = 4;
int q2 = 5;  
int q3 = 6;
int q4 = 7;
int q5 = 8;
int q6 = 9;
int q7 = 10;
int r0 = 13;
int r1 = 43;
int r2 = 44;
int r3 = 45;
int r4 = 46;
int r5 = 47;
int r6 = 48;
int r7 = 49;
//ultimas agregadas
int ia0 = 54;
int ia1 = 55;
int va0 = 56;
int va1 = 57;
int va2 = 58;
int va3 = 59;
int pwm0 = 11;
int pwm1 = 12;

//puertos
void puertos();

//digitalIO
void e(int pin);
void s(int pin);
void on(int pin);
void off(int pin);
void escribir(int pin, bool value);
void leer(int pin);




//Analog I/O
void leerA(int pin);
void referenciaA(int type);
void escribirA(int pin, int valor);
void initSerial();
void pintar(char frase);

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
