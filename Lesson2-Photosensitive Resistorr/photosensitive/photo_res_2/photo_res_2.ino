// https://all-arduino.ru/arduino-dlya-nachinayushhih-urok-8-analogovye-vhody/


int sensePin = 2; // Пин к которому подключен фоторезистор
int senseVal = 0;
int ledPin = 12; // Пин к которому подключен светодиод
int minLight = 200;
 
void setup() {
  pinMode(ledPin, OUTPUT); // назначаем пин ledPin выходом
}
 
void loop() {
  senseVal = analogRead(sensePin); // Считываем значение с фоторезистора
 
  if (senseVal < minLight)
    digitalWrite(ledPin, HIGH); //включаем светодиод если значение меньше 800
  else
    digitalWrite(ledPin, LOW); // если нет то выключаем светодиод
}
