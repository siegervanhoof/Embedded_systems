 #include <Servo.h>

Servo handServo;
Servo boxServo;

int switchStatus = 0;
const int ledPin = 13;
const int frontSwitchPin = 2;
const int handServoPin = 5;
const int boxServoPin = 6;


void setup()
{
  pinMode(ledPin, OUTPUT);
  
  pinMode(frontSwitchPin, INPUT);
  digitalWrite(frontSwitchPin, HIGH);
  
  Serial.begin(9600);

  handServo.attach(handServoPin);
  boxServo.attach(boxServoPin);
  handServo.write(180);
  boxServo.write(0);
}
void loop()
{ 
  Serial.println("StartLoop"); //debug line
  
  switchStatus = digitalRead(frontSwitchPin);
  Serial.println(switchStatus); //Check switch

  if (switchStatus == LOW) { //Check switch status
    delay(500);
      for (int i = 0; i <= 70; i++) //open box
      {
        boxServo.write(i);
        Serial.println("box1");//debug
        delay(20);
      }
      delay(20);
      for (int j = 180; j >= 30; j--)//position arm
      {
        handServo.write(j);
        Serial.println(j);//debug
        Serial.println("hand1");//debug
      }
      delay(1000);
      handServo.write(0); //push lever with arm
      delay(200);
      
      for (int y = 0; y <= 180; y++) //retract arm
      {
        handServo.write(y);
        Serial.println("hand2");//debug
        delay(20);
      }
      delay(20);
      
      for (int x = 70; x >= 0; x--)//close box
      {
        boxServo.write(x);
        Serial.println("box2");//debug
        delay(20);
      }
      delay(2000);
      
  }
}
