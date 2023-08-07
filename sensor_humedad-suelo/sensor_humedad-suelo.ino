int sensor = A0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int humedad = analogRead(sensor);
  Serial.println(humedad);
  delay(1000);

}




