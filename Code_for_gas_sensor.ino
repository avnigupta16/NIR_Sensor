const int ledPin = 2;
const int buzzerPin = 3;
const int sensorPin = A0;
const int threshold = 100;

void alarm_on() {
  digitalWrite(ledPin, HIGH);
  tone(buzzerPin, 5000);
  delay(1000);
  alarm_off();
}

void alarm_off() {
  digitalWrite(ledPin, LOW);
  noTone(buzzerPin);
  delay(500);
}

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print("MQ-4:");
  Serial.println(sensorValue);
  (sensorValue > threshold) ? alarm_on() : alarm_off();
}