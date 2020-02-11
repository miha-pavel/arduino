// https://all-arduino.ru/arduino-dlya-nachinayushhih-urok-5-knopki-shim-funktsii/
// https://all-arduino.ru/arduino-dlya-nachinayushhih-urok-6-drebezg-kontaktov/
// переменные с пинами подключенных устройств
int switchPin = 7;
// 11 пин умеет делать ШИМ
int ledPin = 11;
 
// переменные для хранения состояния кнопки и светодиода
boolean lastButton = LOW;
boolean currentButton = LOW;
int ledLevel = 0;
 
void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
 
// функция для подавления дребезга
boolean debounse(boolean last) {
  boolean current = digitalRead(switchPin);
  if(last != current) {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}
 
void loop() {
  currentButton = debounse(lastButton);
  if(lastButton == LOW && currentButton == HIGH) {
    ledLevel = ledLevel + 51;
  }
  lastButton = currentButton;
 
  if(ledLevel > 255) ledLevel = 0;
  analogWrite(ledPin, ledLevel);
}
