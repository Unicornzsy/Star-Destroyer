
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);   //select the channel
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);   //send message
  delay(500);
}
