void setup() {
  // put your setup code here, to run once:
  //pin 3 = blue
  //pin 5 = green
  //pin 7 = red
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH); //turn the LED on (HIGH id the voltage level)
  delay(1000);            //wait for a second
  digitalWrite(9, LOW);  //turn the LED off
  delay(500);            //wait for a seond
}
