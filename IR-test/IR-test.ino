#define IR_IZQ 8
#define IR_DER 12

void setup() {
  pinMode(IR_IZQ, INPUT);
  pinMode(IR_DER, INPUT);
  Serial.begin(9600);
}

void loop() {
  int izq = digitalRead(IR_IZQ);
  int der = digitalRead(IR_DER);

  Serial.print("Sensor IR Izquierda: ");
  Serial.println(izq == HIGH ? "Borde" : "Piso");

  Serial.print("Sensor IR Derecha: ");
  Serial.println(der == HIGH ? "Borde" : "Piso");

  delay(500);
}