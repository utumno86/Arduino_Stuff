void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH); //turn the LED on (HIGH id the voltage level)
  delay(1000);            //wait for a second
  digitalWrite(8, LOW);  //turn the LED off
  delay(500);            //wait for a seond
}
