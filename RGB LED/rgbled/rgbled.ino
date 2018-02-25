#define BLUE_PIN 3
#define GREEN_PIN 5
#define RED_PIN 9

void setup() {
  // put your setup code here, to run once:
  //pin 3 = blue
  //pin 5 = green
  //pin 9 = red
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_PIN, HIGH); //turn the LED on (HIGH id the voltage level)
  delay(1000);            //wait for a second
  digitalWrite(RED_PIN, LOW);  //turn the LED off
  digitalWrite(BLUE_PIN, HIGH);
  delay(1000);            //wait for a seond
  digitalWrite(BLUE_PIN, LOW);  //turn the LED off
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
  digitalWrite(GREEN_PIN, LOW);
}
