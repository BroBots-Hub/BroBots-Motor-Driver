#ifndef MotorDriver_h
#define MotorDriver_h

#include "Arduino.h"

class MotorDriver
{
  public:
    MotorDriver(int ENA, int ENB, int INPins[4]);
    void begin();
    void spinForward(int motorSpeed);
    void spinBackwards(int motorSpeed);
    void spinLeft(int motorSpeed);
    void turnLeft(int motorSpeed, int multiplier);
    void spinRight(int motorSpeed);
    void turnRight(int motorSpeed, int multiplier);
    void stopMotors();
  private:
    int _ena;
    int _enb;
    int _motors[4];
};

#endif
