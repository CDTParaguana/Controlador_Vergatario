#include <cdt.h>

void setup() {

    retraso(2000);
    puertos();
    initSerial(9600);

}

void loop() {
    if (leer(dip0))pwm(p0, 0); //STOP
    if (leer(dip1))pwm(p0, 50); //25% SPEED
    if (leer(dip2))pwm(p0, 150);//60% SPEED
    if (leer(dip3))pwm(p0, 255);//100% SPEED
}
