// https://all-arduino.ru/arduino-dlya-nachinayushhih-urok-5-knopki-shim-funktsii/
// видео 19-13 дребез контактов 
// второй скетч. меняет состояние при нажатии на кнопку
// переменные с пинами подключенных устройств
int switchPin = 7;
int ledPin = 11;

// переменные для хранения состояния кнопки и светодиода
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean ledOn = false;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if(lastButton == LOW && digitalRead(switchPin) == HIGH) {
    ledOn = !ledOn;
    lastButton == HIGH;
  }else{
      lastButton = digitalRead(switchPin);
  }
  digitalWrite(ledPin, ledOn);
}
