#include <Servo.h>

Servo handServo;
Servo boxServo;

int switchStatus=0, action=1;
const int ledPin = 13;
const int frontSwitchPin = 2;
const int handServoPin = 5;
const int boxServoPin = 6;


void setup()
{
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  
  handServo.attach(handServoPin);
  boxServo.attach(boxServoPin);
  handServo.write(180);
  boxServo.write(70);
}
void loop()
{
  switchStatus = digitalRead(frontSwitchPin);
  //action = random(1,16);
  
  if (switchStatus == LOW){
    
    if (action == 1)
    {
      Serial.println("Action 1");
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
      for (int i = 26; i <=180; i++)
      {
        handServo.write(i);
        delay(20);
      }
      for (int i = 110; i >= 70; i--)
      {
        boxServo.write(i);
        delay(20);
      }
      action++;
    }
    
    
    else if (action == 2)
    {
      Serial.println("Action 2");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(550);
      handServo.write(26);
      delay(1000);
      handServo.write(180);
      delay(550);
      boxServo.write(70);
      delay(1500);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(3000);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 3)
    {
      Serial.println("Action 3");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(1000);
      boxServo.write(70);
      delay(2000);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(26);
      delay(650);
      handServo.write(180);
      delay(500);
      boxServo.write(70);
      action++;
    }
   
    else if (action == 4)
    {
      Serial.println("Action 4");
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
      delay(2000);
      handServo.write(26);
      delay(200);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 5)
    {
      Serial.println("Action 5");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      handServo.write(65);
      delay(550);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(2000);
      handServo.write(26);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 6)             
    {
      Serial.println("Action 6");
      for (int i = 70; i <110; i++)
      {
        boxServo.write(i);
        delay(20);
      }
      delay(1000);
      for (int i = 0; i < 12; i++)
      {
        for (int j = 70; j <= 110; j++){
          boxServo.write(j);
          delay(6);
        }
        delay(200);
      }
      for (int i = 180; i >= 35; i--)
      {
        handServo.write(i);
        delay(30);
      }
      handServo.write(26);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      delay(1500);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(3000);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 7)
    {
      Serial.println("Action 7");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(400);
      handServo.write(26);
      delay(1000);
      for (int i = 0; i < 6; i++)
      {
        for (int j = 70; j <= 110; j++){
          boxServo.write(j);
          delay(6);
        }
        delay(200);
      }
      delay(500);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 8)
    {
      Serial.println("Action 8");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(26);
      delay(2000);
      for (int i = 0; i < 7; i++)
      {
        handServo.write(75);
        delay(100);
        handServo.write(40);
        delay(100);
      }
      delay(500);
      handServo.write(180);
      delay(1000);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 9)
    {
      Serial.println("Action 9");
      for (int i = 70; i <= 105; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      boxServo.write(110);
      for (int i = 180; i >=35; i--)
      {
        handServo.write(i);
        delay(40);
      }
      delay(500);
      handServo.write(26);
      delay(200);
      for (int i = 26; i <=180; i++)
      {
        handServo.write(i);
        delay(40);
      }
      boxServo.write(70);
      delay(2000);
      boxServo.write(100);
      delay(3000);
      boxServo.write(70);
      action++;
    }
  
    
    else if (action == 10)
    {
      Serial.println("Action 10");
      for (int i = 70; i <= 105; i++)
      {
        boxServo.write(i);
        delay(100);
      }
      delay(1000);
      for (int i = 0; i < 10; i++)
      {
        for (int j = 70; j <= 100; j++){
          boxServo.write(j);
          delay(6);
      }
        delay(100);
      }
      boxServo.write(110);
      delay(100);
      handServo.write(26);
      delay(650);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 11)
    {
      Serial.println("Action 11");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(26);
      delay(2000);
      for (int i = 0; i < 3; i++)
      {
        handServo.write(65);
        delay(200);
        handServo.write(40);
        delay(200);
      }
      delay(1500);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      delay(1500);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(26);
      delay(3000);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 12)
    {
      Serial.println("Action 12");
      for (int i = 70; i <= 110; i++)
      {
        boxServo.write(i);
        delay(50);
      }
      delay(1000);
      for (int i = 180; i >= 26; i--)
      {
        handServo.write(i);
        delay(50);
      }
      delay(2000);
      handServo.write(26);
      delay(200);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 13)
    {
      Serial.println("Action 13");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      for (int i = 180; i >= 60; i--)
      {
        handServo.write(i);
        delay(40);
      }
      for (int i = 0; i < 3; i++)
      {
        handServo.write(60);
        delay(200);
        handServo.write(40);
        delay(800);
      }
      handServo.write(26);
      delay(2000);
      handServo.write(180);
      delay(500);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 14)
    {
      Serial.println("Action 14");
      for (int i = 70; i <= 105; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(4000);
      boxServo.write(110);
      handServo.write(26);
      delay(650);
      handServo.write(180);
      delay(500);
      boxServo.write(100);
      delay(4000);
      boxServo.write(70);
      action++;
    }
    
    else if (action == 15)
    {
      Serial.println("Action 15");
      for (int i = 70; i <= 105; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(1000);
      for (int i = 0; i < 3; i++)
      {      
        for (int j = 70; j <= 105; j++){
          boxServo.write(j);
          delay(50);
        }
        for (int j = 105; j >= 70; j--)
        {
          boxServo.write(j);
          delay(50);
        }
      }
      for (int j = 70; j <= 110; j++){
        boxServo.write(j);
        delay(50);
      }
      for (int i = 180; i >= 35; i--)
      {
        handServo.write(i);
        delay(40);
      }
      delay(1000);
      handServo.write(26);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action = 1;
    }
    
  }
  
}
