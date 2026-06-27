float celsiusToFahrenheit(float celsius) {
  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
  return fahrenheit;
}


void setup() {
  Serial.begin(9600);
  
  // 0 C
  Serial.print ("0 C = ");
  Serial.print (celsiusToFahrenheit(0));
  Serial.println (" F");

  // 100 C
  Serial.print ("100 C = ");
  Serial.print (celsiusToFahrenheit(100));
  Serial.println (" F");

  // 37 C
  Serial.print("37 C = "); 
  Serial.print(celsiusToFahrenheit(37)); 
  Serial.println(" F");

  // 42 C
  Serial.print("42 C = "); 
  Serial.print(celsiusToFahrenheit(42)); 
  Serial.println(" F");

}

void loop() {
  // put your main code here, to run repeatedly:

}
