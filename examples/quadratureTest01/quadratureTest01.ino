
#include "quadratureBluePill.h"

/*
Pins associated with each timer are
HardwareTimer timer(1); PA8-9 
HardwareTimer timer(3); PA6-7 
HardwareTimer timer(4); PB6-7 
*/


quadCounter  QC1(QUAD_TIMER_1);
quadCounter  QC3(QUAD_TIMER_3);
quadCounter  QC4(QUAD_TIMER_4);


void setup() {
  
  Serial.begin(9600);
  Serial.println("-- Start quadCounter test --");
}


void loop() {

  Serial.print("counts = ");
  Serial.print(QC1.count());
  Serial.print(", ");
  Serial.print(QC3.count());
  Serial.print(", ");
  Serial.println(QC4.count());

  delay(1000);
  }
