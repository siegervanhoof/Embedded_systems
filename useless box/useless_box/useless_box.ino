#include <Servo.h>

Servo handServo;
Servo boxServo;

int switchStatus = 0;
const int ledPin = 13;
const int frontSwitchPin = 6;
const int handServoPin = 10;
const int boxServoPin = 11;


void setup()
{
  pinMode(ledPin, OUTPUT);

  handServo.attach(handServoPin);
  boxServo.attach(boxServoPin);
  handServo.write(180);
  boxServo.write(70);
}
void loop()
{
  switchStatus = digitalRead(frontSwitchPin);
  

  if (switchStatus == HIGH) {
      for (int i = 70; i <= 110; i++)
      {
        boxServo.write(i);
        delay(20);
      }
      for (int i = 180; i >= 35; i--)
      {
        handServo.write(i);
        delay(20);
      }
      delay(1000);
      handServo.write(26);
      delay(200);
      for (int i = 26; i <= 180; i++)
      {
        handServo.write(i);
        delay(20);
      }
      for (int i = 110; i >= 70; i--)
      {
        boxServo.write(i);
        delay(20);
      }

    
  }
}
