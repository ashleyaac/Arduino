int LED_1=13;
int LED_2=7;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);

}

void loop() {
  int val=analogRead(A5);

  if (val > 20){
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, LOW);
  }

  else{
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, HIGH);
  }

  delay(500);
}
