#include "cdt.h"

void e(int pin) {
  pinMode(pin, INPUT);
}
void s(int pin) {
  pinMode(pin, OUTPUT);
}
void on(int pin)
{
  digitalWrite(pin, HIGH);  
}

void off(int pin)
{
  digitalWrite(pin, LOW);  
}

void escribir(int pin, bool value)
{
  digitalWrite(pin, value);  
}
void leer(int pin)
{
  digitalRead(pin);  
}

//puertos

void puertos()
{
  //salidas pwm
  pinMode(p0, OUTPUT);
  pinMode(p1, OUTPUT);

  pinMode(62, OUTPUT);
  digitalWrite(62, 1);
  pinMode(63, OUTPUT);
  digitalWrite(63, 1);
  pinMode(64, OUTPUT); 
  digitalWrite(64, 1);
  //INPUTS
  pinMode(in0, INPUT);
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);
  pinMode(in5, INPUT);
  pinMode(in6, INPUT);
  pinMode(in7, INPUT);
  pinMode(in8, INPUT);
  pinMode(in9, INPUT);
  pinMode(in10, INPUT);
  pinMode(in11, INPUT);
  pinMode(in12, INPUT);
  pinMode(in13, INPUT);
  pinMode(in14, INPUT);
  pinMode(in15, INPUT);
  pinMode(in16, INPUT);
  pinMode(in17, INPUT);
  pinMode(in18, INPUT);
  pinMode(in19, INPUT);
  pinMode(in20, INPUT);
  pinMode(in21, INPUT);
  pinMode(in22, INPUT);
  pinMode(in23, INPUT);
  //ultimas
  pinMode(i0, INPUT);
  pinMode(i1, INPUT);
  pinMode(v0, INPUT);
  pinMode(v1, INPUT);
  pinMode(v2, INPUT);
  pinMode(v3, INPUT);
  //DIP's INPUTS
  pinMode(dip0, INPUT);
  pinMode(dip1, INPUT);
  pinMode(dip2, INPUT);
  pinMode(dip3, INPUT);
  //IGBT'S OUTPUTS
  pinMode(q0, OUTPUT);
  pinMode(q1, OUTPUT);
  pinMode(q2, OUTPUT);
  pinMode(q3, OUTPUT);
  pinMode(q4, OUTPUT);
  pinMode(q5, OUTPUT);
  pinMode(q6, OUTPUT);
  pinMode(q7, OUTPUT);
  //RELAY OUTPUTS
  pinMode(r0, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(r5, OUTPUT);
  pinMode(r6, OUTPUT);
  pinMode(r7, OUTPUT);  
}

//Analog I/O
void leerA(char pin)
{
  analogRead(pin);
}
void referenciaA(int type)
{
  analogReference(type);
}
void pwm(int pin, int value)
{
  analogWrite(pin, value);
}
void initSerial()
{
 Serial.begin(9600); 
}

void pintar(char frase)
{
  Serial.print(frase);
}
//tiempo
void retraso(unsigned long milisegundos)
{
  delay(milisegundos);
}

void retrasoSe(int seconds)
{
  unsigned long tiempo = seconds * 1000;
  delay(tiempo);
}

void retrasoMili(unsigned long valor)
{
  delayMicroseconds(valor);
}

void microSegundos()
{
  micros();
}

void miliSegundos()
{
  millis(); 
}

//Math
int absoluto(int num)
{
return abs(num);  
}

int contraer(int num, int num2, int num3)
{
return constrain(num, num2, num3);  
}

int mapear(int value, int desbeAbajo, int desdeArriba, int paraAbajo, int paraArriba) {
  return map(value, desbeAbajo, desdeArriba, paraAbajo, paraArriba);
}

float maximo(float a, float b)
{
 return max(a,b);  
}

float minimo(float a, float b)
{
 return min(a,b);  
}

float potencia(float a, float b)
{
  return pow(a, b);
}

float cuadrado(float a)
{
  return sq(a);
}

float raiz(float a)
{
  return sqrt(a);
}
//Random

void iniciarAleatorio(unsigned long semilla)
{
   randomSeed(semilla);
}

void aleatorio(int a, int b)
{
  random(a,b);
}

//Bits and bytes

int bitLimpiar(int x, int n)
{
  return bitClear(x, n); 
}

int bitL(int x, int n)
{
  return bitRead(x, n); 
}

int bitC(int x, int n)
{
  return bitSet(x, n); 
}

int bitE(int x, int n, int y)
{
  return bitWrite(x, n, y); 
}

int altoByte(byte x)
{
  return highByte(x);
}

int bajoByte(byte x)
{
  return lowByte(x);
}

//Trigonometry

float coseno(float a)
{
 return cos(a);
}

float seno(float a)
{
 return sin(a);
}

float tangente(float a)
{
 return tan(a);
}

//Characters
void esAlpha(char dato) {
   isAlpha(dato);
}

void esAlphaNum(char valor)
{
  isAlphaNumeric(valor);
}

void esAscii(char valor)
{
  isAscii(valor);
}

void esControl(char valor)
{
  isControl(valor);
}

void esDigito(float valor)
{
  isDigit(valor);
}

void esGraphic(char valor)
{
  isGraph(valor);
}

void esHexDigit(char valor)
{
  isHexadecimalDigit(valor);
}

void esMinuscula(char valor)
{
  isLowerCase(valor);
}

void esPintable(char valor)
{
  isPrintable(valor);
}

void esPuntuacion(char valor)
{
  isPunct(valor);
}

void esEspacio(char valor)
{
  isSpace(valor);
}

void esMayuscula(char valor)
{
  isUpperCase(valor);
}

void esEspacioBlanco(char valor)
{
  isWhitespace(valor);
}

//Interrupts

void interrumpir()
{
  interrupts();
}

void noInterrumpir()
{
  noInterrupts();
}

//Estructuras de control

// void mientras(bool condicion, void (*cuerpo)())
// {
//   while(condicion)
//   {
//     cuerpo();
//   }
// }

// void si(bool condicion, void (*entonces)())
// {
//   if(condicion)
//   {
//     entonces();
//   }
// }



