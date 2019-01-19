# BroBots Motor Driver Library
Arduino library for L298N motor driver.
## Instalation
To install library folow the instructions:
1. Close Arduino IDE if it's running
2. Download library from GitHub
3. Extract library folder to Arduino `libraries` folder.
4. Run Arduino IDE.

In `Files > Examples > BroBots-Motor-Driver` you can find examples.
To include library you can use `Sketch > Include Library > BroBots-Motor-Driver`.
# General Documentation

## Setup
Create driver instance:
```C++
BroBots_Motor_Driver driver(int ENA, int ENB, int INPins[4]);
```
- `int ENA` - ENA pin, must be PWM
- `int ENB` - ENB pin, must be PWM
- `int INPins[4]` - array of IN pins, `{IN1, IN2, IN3, IN4}`

Begin driver's work:
```C++
driver.begin();
```
## Moves

#### Forward:
```C++
driver.spinForward(int motorSpeed);
```
- `int motorSpeed` - motors speed from 0 to 255

#### Backwards:
```C++
driver.spinBackwards(int motorSpeed);
```
- `int motorSpeed` - motors speed from 0 to 255

#### Stop:
```C++
driver.stopMotors();
```

#### Turn Left:
```C++
driver.turnLeft(int motorSpeed, int multiplier);
```
- `int motorSpeed` - motors speed from 0 to 255
- `int multiplier` - multiplier of speed for right motor.

#### Spin Left:
```C++
driver.spinLeft(int motorSpeed);
```
- `int motorSpeed` - motors speed from 0 to 255

#### Turn Right:
```C++
driver.turnRight(int motorSpeed, int multiplier);
```
- `int motorSpeed` - motors speed from 0 to 255
- `int multiplier` - multiplier of speed for left motor.

#### Spin Right:
```C++
driver.spinRight(int motorSpeed);
```
- `int motorSpeed` - motors speed from 0 to 255