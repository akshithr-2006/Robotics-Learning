int addTwoNumbers (int a, int b) {
  int result = a + b;
  return result;
}



void setup() {
  Serial.begin (9600);

  int answer = addTwoNumbers (5, 8);
  Serial.print ("5 + 8 = ");
  Serial.println (answer);

  Serial.print ("100 + 200 = ");
  Serial.println (addTwoNumbers(100, 200));

  Serial.print ("-10 + 25 = ");
  Serial.println (addTwoNumbers(-10, 25));

}

void loop() {
  // put your main code here, to run repeatedly:

}
