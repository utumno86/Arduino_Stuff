void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(A0);

  int mappedValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(3, mappedValue);
}
