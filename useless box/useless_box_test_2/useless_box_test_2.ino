#include <Servo.h>

Servo handServo;
Servo boxServo;

int switchStatus = 0;
const int frontSwitchPin = 6;
const int handServoPin = 10;
const int boxServoPin = 11;


void setup()
{
  Serial.begin(9600);
  
  handServo.attach(handServoPin);
  boxServo.attach(boxServoPin);
  handServo.write(26);
  boxServo.write(70);
}
void loop()
{
  switchStatus = digitalRead(frontSwitchPin);
  

  if (switchStatus == LOW) {
      for (int i = 70; i <= 110; i++)
      {
        boxServo.write(i);
        Serial.println("box");
        delay(20);
      }
      for (int i = 26; i >= 171; i++)
      {
        handServo.write(i);
        Serial.println("hand");
        delay(20);
      }
      delay(1000);
      handServo.write(180);
      delay(200);
      for (int i = 180; i <= 26; i--)
      {
        handServo.write(i);
        Serial.println("hand");
        delay(20);
      }
      for (int i = 110; i >= 70; i--)
      {
        boxServo.write(i);
        Serial.println("box");
        delay(20);
      }
  }
}
