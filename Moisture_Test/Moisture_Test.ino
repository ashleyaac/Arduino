// Test Moisture Sensor to See if it works
// Print all values to serial

void setup() {
  Serial.begin(9600);
}

void loop() {
    // Read Moisture Sensor
    double sensorValue = analogRead(A0);

    // Print Moisture Sensor Value
    Serial.print("sensor value: ");
    Serial.println(sensorValue);

    delay(1500);
}
