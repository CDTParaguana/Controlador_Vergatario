#include <cdt.h>

//Guarda en un array los pines que se desean utlizar
int pines[] = {in0, in1, in2, in3, in4, in5, in6, in7};
int reles[] = {q0, q1, q2, q3, q4, q5, q6, q7};

void setup() {

  puertos();
}

void loop() {
  //Itera en un ciclo for para que el codigo sea mas optimo
  for(int i=0; i<=8; i=i+1){
    if(pines[i] == HIGH) on(reles[i]);
    else off(reles[i]);
    }
}
