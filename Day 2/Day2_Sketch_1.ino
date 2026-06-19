void setup() {
  Serial.begin(9600);

  // -- Variables -- 
  int age = 25;
  float temperature = 32.5;
  bool israining = false;
  char grade = 'O';

  // -- Print Each Variable --
  Serial.print ("Age: ");
  Serial.println (age);

  Serial.print ("Temperature: ");
  Serial.println (temperature);

  Serial.print ("Is_Raining: ");
  Serial.println (israining);

  Serial.print ("Grade: ");
  Serial.println (grade);

}

void loop() {
  // put your main code here, to run repeatedly:

}
