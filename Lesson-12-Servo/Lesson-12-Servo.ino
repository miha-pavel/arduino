int readPin = A0;
int servopin = 7;

void servopulse(int angle)
{
    int pulsewidth=(angle*11)+500;
    digitalWrite(servopin,HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servopin,LOW);
    delayMicroseconds(20000-pulsewidth);
}

void setup()
{
    pinMode(servopin,OUTPUT);
}

void loop()
{
    int readValue = analogRead(readPin);
    int angle = readValue / 4;
    for(int i=0;i<50;i++)
    {
        servopulse(angle);
    }
}
