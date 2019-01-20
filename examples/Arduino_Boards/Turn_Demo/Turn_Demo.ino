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
  // Turn left |    Speed   Multiplier of speed for right motor
  driver.turnLeft( 255 / 2,    2);
  delay(2000);

  // Turn right |    Speed   Multiplier of speed for left motor
  driver.turnRight( 255 / 2,    2);
  delay(2000);

  // Stop all motors
  driver.stopMotors();
  delay(1000);
}
