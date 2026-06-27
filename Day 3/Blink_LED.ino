const int LED_PIN = 8;
const int GAP = 300;

void blinkLED(int pin, int times, int duration) {
  for (int i = 0; i < times; i++) {
    digitalWrite(pin, HIGH);
    delay(duration);
    digitalWrite(pin, LOW);
    delay(GAP);
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  blinkLED(LED_PIN, 200, 3);
  delay(1000);
  blinkLED(LED_PIN, 400, 4);
  delay(1000);
  blinkLED(LED_PIN, 1000, 1);

}

void loop() {
  // put your main code here, to run repeatedly:

}
