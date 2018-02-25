#define RED_PIN 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH); //turn the LED on (HIGH id the voltage level)
  delay(1000);            //wait for a second
  digitalWrite(3, LOW);  //turn the LED off
  delay(500);            //wait for a seond
}
