#include <cdt.h>


void setup() {
  initSerial();

  puertos();
}

void loop() {
  //CURRENT INPUT (4-20mA)
  // VOLTAGE VALUE
  int analog0 = leerA(A1);
  float voltage0 = analog0 * 0.004887585532746823069403714565;//
  pintar("voltage0 = " );
  pintar(voltage0);
  pintarLn("V");
  int pwm_out = voltage0*98.076923076923076923076923076923;
  analogWrite(q0, pwm_out);

  //CURRENT VALUE
  float current0 = voltage0 * 7.6923076923076923076923076923077; //*2.60V = 20mA
  pintar("current0 = " );
  pintar(current0);
  pintarLn("mA");
  pintarLn(" ");
  // delay(1000);

}
