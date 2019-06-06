
/*
Blinking LED
By Michelle Bakels
This sketch blinks an LED
*/

void setup() {
  // set pin 6 as an output
  pinMode(6, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:

  //turn on the LED
  digitalWrite(6, HIGH);
  //wait for 1 second
  delay(1000);
  //turn the LED off
  digitalWrite(6, LOW);
  //wait for 1 second
  delay(1000);
}
