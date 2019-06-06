/*
Secret Serial Messages
By Michelle Bakels
Print a serial message
*/
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("This is a secret message");
}
