// Hello World
// Get Arduino to print on the computer screen

void setup() {
  Serial.begin(9600); // Open a line of communication between arduino and computer
}

void loop() {
  // print hello world to serial monitor
  Serial.println("hello ");
  delay(1000);
  Serial.println("world.");
  delay(1000);
}
