/*
  DCMotor.h - implementation
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

    // Turn the motor on with a specified speed.
    void on(uint8_t speed);

    // Turn the motor on with a specified speed, for a given time.
    void on(uint8_t speed, int millisec);

    // Turn the motor off.
    void off();
};

#endif