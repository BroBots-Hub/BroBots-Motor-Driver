// Include library
#include <BroBots_Motor_Driver.h>

// List of IN pins  |  IN1  IN2  IN3  IN4
const int inPins[4] = { 3,   2,   7,   4 };

// Creating driver instance | ENA   ENB   IN pins
BroBots_Motor_Driver driver(  10,   11,   inPins );

void setup() {
  // Begin driver's work
  driver.begin();
}

void loop() {
  // Spin all motors forward at max speed
  driver.spinForward(255);
  delay(2000);

  // Spin all motors backwards
  driver.spinBackwards(150);
  delay(2000);
  
  // Stop all motors
  driver.stopMotors();
  delay(1000);
}
