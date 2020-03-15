int sensePin = 2; // Пин к которому подключен фоторезистор
int ledPin = 12; // Пин к которому подключен светодиод
 
void setup() {
 pinMode(ledPin, OUTPUT); // назначаем пин ledPin выходом
}
 
void loop() {
 int val = analogRead(sensePin); // Считываем значение с фоторезистора
 
 if(val < 800) digitalWrite(ledPin, HIGH); //включаем светодиод если значение меньше 800
 else digitalWrite(ledPin, LOW); // если нет то выключаем светодиод
}
