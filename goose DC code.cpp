int lightSensorPin = A1;
int val;

void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  val = analogRead(lightSensorPin);
  Serial.println(val);
  if (val >= 100){
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
  }
  else {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
}