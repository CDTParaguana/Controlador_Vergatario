#include <cdt.h>



void setup() {

    retraso(2000);
    s(64);
    e(64);
    //SALIDA PWM(0-10V)
    s(11);

    initSerial();

    //DIP SWITCH INPUTS
    e(66);
    e(67);
    e(68);
    e(69);

}

void loop() {
    if (leer(66))pwm(11, 0); // STOP
    if (leer(67))pwm(11, 50); // 25% SPEED
    if (leer(68))pwm(11, 150);//60% SPEED
    if (leer(69))pwm(11, 255);//100% SPEED
}
