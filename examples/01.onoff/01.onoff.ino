#include <DCMotor.h>

/**
 * DCMotor on/off example alternating on directions.
*/



DCMotor motor = DCMotor(2, 4, 9);

void setup() {

}

void loop() {

  int speed = 150;
  int t = 1000;

  motor.on(speed, t);
  
  delay(2000);
  
  motor.on(-speed, t);

  delay(2000)

}