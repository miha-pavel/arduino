// https://all-arduino.ru/arduino-dlya-nachinayushhih-urok-5-knopki-shim-funktsii/
// Первый скетч. Светодиод горит при нажатой кнопке
// переменные с пинами подключенных устройств
int switchPin = 7;
int ledPin = 11;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // включаем всетодиод при нажатой кнопке
  if(digitalRead(switchPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
