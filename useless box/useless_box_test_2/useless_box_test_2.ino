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
  
  pinMode(frontSwitchPin, INPUT);
  digitalWrite(frontSwitchPin, HIGH);
  
  Serial.begin(9600);

  handServo.attach(handServoPin);
  boxServo.attach(boxServoPin);
  handServo.write(180);
  boxServo.write(30);
}
void loop()
{ 
  switchStatus = digitalRead(frontSwitchPin);
  

  if (switchStatus == LOW) {
      for (int i = 30; i <= 70; i++)
      {
        boxServo.write(i);
        Serial.println("box1");
        delay(20);
      }
      delay(20);
      for (int j = 180; j >= 35; j--)
      {
        handServo.write(j);
        Serial.println("hand1");
        delay(20);
      }
      delay(20);
      
      delay(1000);
      handServo.write(26);
      delay(200);
      
      for (int y = 26; y <= 180; y++)
      {
        handServo.write(y);
        Serial.println("hand2");
        delay(20);
      }
      delay(20);
      
      for (int x = 70; x >= 30; x--)
      {
        boxServo.write(x);
        Serial.println("box2");
        delay(20);
      }
      delay(2000);
      
  }
}
