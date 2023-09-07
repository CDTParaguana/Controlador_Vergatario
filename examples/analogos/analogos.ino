#include <cdt.h>

void setup() {
    initSerial();
    puertos();
}

void loop() {
    //ANALOG INPUT (0 - 10V)
    int analog0 = leerA(A2);// declarar los puertos de entradas analógicos solo cuando sea necesario
    int v_analog0 = mapear(analog0, 0, 1023, 0, 255);
    pwm(q0, v_analog0);
    pintarLn(v_analog0);
    retraso(500);
    
}
