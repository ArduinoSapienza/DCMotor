/*
  DCMotor.h - implementation
  Copyright (c) 2023 Graziano Blasilli.
*/

#include "DCMotor.h"


DCMotor::DCMotor(uint8_t pinA, uint8_t pinB, uint8_t pinS) {
  this->pinA = pinA;
  this->pinB = pinB;
  this->pinS = pinS;

  pinMode(this->pinA, OUTPUT);
  pinMode(this->pinB, OUTPUT);
  pinMode(this->pinS, OUTPUT);
}


// Turn the motor on with a specified speed.
void DCMotor::on(uint8_t speed) {
  this->off();

  // Ensure speed is within valid range (0-255)
  speed = constrain(speed, -255, 255);
      
  // Set the motor direction based on the sign of the speed
  digitalWrite(this->pinA, speed >= 0 ? HIGH : LOW);
  digitalWrite(this->pinB, speed >= 0 ? LOW : HIGH);

  // Set the motor speed using PWM
  analogWrite(this->pinS, abs(speed));
}

// Turn the motor on with a specified speed, for a given time.
void DCMotor::on(uint8_t speed, int millisec) {
  this->on(speed);
  delay(millisec);
  this->off();
}

// Turn the motor off.
void DCMotor::off() {
  digitalWrite(this->pinA, LOW);
  digitalWrite(this->pinB, LOW);
  analogWrite(this->pinS, 0);
}

