#include <cdt.h>

unsigned long t=1;



void setup() {
puertos();
on(r0);
on(q1);
retrasoSe(t);
off(r0);
off(q1);
retraso(t);

}

void loop() {
 on(r0);
retraso(t);
off(r0);
retraso(t);
}
