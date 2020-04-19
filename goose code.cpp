#include <Servo.h>

int lightSensorPin = A1;
Servo myservo1;
Servo myservo2;
int val;
int pos = 0;

void setup()
{
  Serial.begin(9600);
  myservo1.attach(7);
  myservo2.attach(6);
}

void loop()
{
  val = analogRead(lightSensorPin);
  Serial.println(val);
  if (val >= 100){
    for (pos = 0; pos <= 180; pos += 1){
      myservo1.write(pos);
      myservo2.write(180-pos);
      delay(15);}
    for (pos = 180; pos >= 0; pos -= 1){
      myservo1.write(pos);
      myservo2.write(0+pos);
      delay(15);}
  }
}