void setup() {
  Serial.begin(9600);

}

void loop() {
  // To Check If A Number Is Even Or Odd
  for (int i = 1; i <= 20; i++) {

    // Check If i Is Even
    if (i % 2 == 0) {
      Serial.print (i);
      Serial.println (" Is Even");
    } else {

      // Check If i Is Odd
      Serial.print(i);
      Serial.println (" Is Odd");
    }
    delay (300);
  } 
  delay (3000);

}
