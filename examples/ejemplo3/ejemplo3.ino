#include <cdt.h>

//PWM_OUTPUTS (0-10V)
int AO0 = 11;
int AO1 = 12;

void setup() {
  //PWM_OUTPUTS
  s(AO0);
  s(AO1);

}

void loop() {
  //ANALOG VOLTAGE INPUT (0-10V)
  int analog0 = leerA(A2);
  int pwm_out = mapear(analog0, 0, 1023, 0, 255);
  pwm(AO1, pwm_out);
}