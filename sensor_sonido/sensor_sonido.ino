int sensor_sonido = 2;
int valor;
int led = 3;
int estado;


void setup() {
  pinMode(sensor_sonido, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);

}

void loop() {
  valor = digitalRead(sensor_sonido);
  Serial.println(valor);
  
  estado = digitalRead(led);

  if(valor == HIGH){
    digitalWrite(led, !estado);
  }
  
  delay(100);
}
