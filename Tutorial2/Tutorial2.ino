// Tutorial 2: Focus on detcting noise and a lightbulb lighting up with certain noise detection

int sensorPin=A0;
const int numofLEDS=1;
long signal[16];


int threshold = 227;
void setup() {
  pinMode(13, OUTPUT);

  digitalWrite(13, LOW);

  pinMode(sensorPin, INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sample = analogRead(sensorPin);

//  sample = abs(sample-512);
  Serial.print(sample);
  if (sample >= threshold){
    digitalWrite(13, HIGH);
    delay(10000);
    digitalWrite(13, LOW);
  }
}

