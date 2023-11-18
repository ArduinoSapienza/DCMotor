/*
  DCMotor.h - definition.
  Copyright (c) 2023 Graziano Blasilli.
*/


#ifndef DCMotor_H
#define DCMotor_H

#include <Arduino.h>

class DCMotor {
  private:
    uint8_t pinA;
    uint8_t pinB;
    uint8_t pinS;
  
  public:
    // Constructor
    DCMotor(uint8_t pinA, uint8_t pinB, uint8_t pinS);

   // Turn on the motor.
    void on(int speed);

    // Turn on the motor for a specified time.
    void on(int speed, int millisec);

    // Turn off the motor.
    void off();
};

#endif