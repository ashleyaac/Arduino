// Double Blink: Make Arduino Uno Blink Two LEDs on and off
// From: https://quarksteam.wordpress.com/2009/12/09/arduino-2-digital-input/
// + (long) end of LED should be connected to the pin, - (short) should be connected to the ground

void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);


  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(7, HIGH);
  delay(500);
}
