/*
    Project name : Soil Moisture Sensor
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-soil-moisture-sensor
*/

// Analog pin connected to the soil moisture sensor
const int moistureSensorPin = A0;

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the soil moisture sensor
  int sensorValue = analogRead(moistureSensorPin);

  // Map the sensor value to a percentage (0-100%)
  int moisturePercent = map(sensorValue, 0, 1023, 100, 0);

  // Print the moisture percentage to the Serial Monitor
  Serial.print("Moisture Level: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  delay(1000); // Add a delay before the next reading
}
