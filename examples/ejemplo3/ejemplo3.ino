#include <cdt.h>

void setup() {
  //PWM_OUTPUTS
  puertos();
}

void loop() {
  //ANALOG VOLTAGE INPUT (0-10V)
  int analog0 = leerA(v0);
  int pwm_out = mapear(analog0, 0, 1023, 0, 255);
  pwm(p1, pwm_out);
}