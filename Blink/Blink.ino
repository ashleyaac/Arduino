// Blink: No Breadboard
// LED + attached to pin 13 and LED - attached to ground
// Testing using Arduino Uno

void setup() {
  pinMode(13, OUTPUT);  
}

void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
