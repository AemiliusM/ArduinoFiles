int LightPin = 13;

void setup() {
pinMode(LightPin, OUTPUT);
}

void loop() {
digitalWrite(LightPin, HIGH);
delay(1000);
digitalWrite(LightPin, LOW);
delay(1000);
}