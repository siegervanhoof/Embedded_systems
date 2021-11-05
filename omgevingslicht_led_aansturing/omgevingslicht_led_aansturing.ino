int sensorPin = A0;    
int ledPin = 10;      
unsigned int sensorValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);  
  Serial.println(sensorValue);
  sensorValue = map(sensorValue,0,1023,255,0);
analogWrite(10,sensorValue);
}
