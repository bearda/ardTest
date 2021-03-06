#include <Arduino.h>
#include <Servo.h>
void setup();
void loop();
#line 1 "src/sketch.ino"
/*
Adafruit Arduino - Lesson 14. Sweep
*/
 
//#include <Servo.h>
 
int servoPin = 9;
Servo servo;
int angle = 0; // servo position in degrees
void setup()
{
    servo.attach(servoPin);
}
void loop()
{
    // scan from 0 to 180 degrees
    for(angle = 0; angle < 90; angle++)
    {
        servo.write(angle);
        delay(15);
    }
    // now scan back from 180 to 0 degrees
    for(angle = 90; angle > 0; angle--)
    {
        servo.write(angle);
        delay(15);
    }
} 
