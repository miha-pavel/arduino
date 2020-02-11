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
    ledOn = !ledOn;
  }
  lastButton = currentButton;
  digitalWrite(ledPin, ledOn);
}
