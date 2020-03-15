int photocellPin = 2; // photocell to anallog pin 2
int photocellVal = 0; // photocell variable
int minLight = 200;
int ledPin = 12;
int ledState = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  photocellVal = analogRead(photocellPin);
  Serial.println(photocellVal);

  if (photocellVal < minLight && ledState == 0)
  {
    digitalWrite(ledPin, HIGH); // turn on LED
    ledState = 1;
  }

  if (photocellVal > minLight && ledState == 1)
  {
    digitalWrite(ledPin, LOW); // turn off LED
    ledState = 0;
  }
  delay(100);
}
