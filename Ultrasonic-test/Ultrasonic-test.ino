#define TRIG_PIN 10
#define ECHO_PIN 11

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  long duracion, distancia;

  // Disparo del pulso ultrasónico
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Lectura del pulso de eco
  duracion = pulseIn(ECHO_PIN, HIGH, 25000); // timeout de 25ms (~4m distancia máxima)
  distancia = duracion * 0.034 / 2; // Conversión a cm

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(500);
}