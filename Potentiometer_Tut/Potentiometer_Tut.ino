// Use Potentiometer to control a blinking light

void setup() {
  pinMode(13, OUTPUT);

  Serial.begin(9600);
  digitalWrite(13, LOW);
}

void loop() {
  int val;
  val=analogRead(A5);
  
  Serial.println(val);
  Serial.println("\n");
  
  delay(val);
  digitalWrite(13, HIGH);
  delay(val);
  digitalWrite(13, LOW);
  
}
