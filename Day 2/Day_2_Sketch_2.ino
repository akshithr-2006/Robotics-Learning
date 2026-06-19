void setup() {
  Serial.begin(9600);

}

void loop() {
  // Ccount From 1 to 10
  for (int i = 1; i <= 10; i++) {
    Serial.print("Count: ");
    Serial.println(i);
    delay(500);
  }

  // -- Restarting --
  Serial.println(" -- Restarting -- ");
  delay(2000);


}
