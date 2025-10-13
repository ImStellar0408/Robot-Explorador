#include <Servo.h>
#include "Configuracion.h"

Servo servoHor;

void setup() {
  // Motor
  pinMode(ENA, OUTPUT); pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT); pinMode(IN4, OUTPUT); pinMode(ENB, OUTPUT);
  // Ultrasonico
  pinMode(TRIG_PIN, OUTPUT); pinMode(ECHO_PIN, INPUT);
  // Sensores IR
  pinMode(IR_IZQ, INPUT); pinMode(IR_DER, INPUT);

  servoHor.attach(SERVO_HOR);
  servoHor.write(90); // Centro
  Serial.begin(9600);
}

void loop() {
  // Verifica bordes con IR
  if (digitalRead(IR_IZQ) == HIGH) {
    detener();
    atras(); delay(TIEMPO_ATRAS);
    derecha(); delay(TIEMPO_GIRO);
    detener();
    Serial.println("Borde izquierda detectado");
    return;
  }

  if (digitalRead(IR_DER) == HIGH) {
    detener();
    atras(); delay(TIEMPO_ATRAS);
    izquierda(); delay(TIEMPO_GIRO);
    detener();
    Serial.println("Borde derecha detectado");
    return;
  }

  // Mide distancia al frente
  servoHor.write(90);
  delay(200);
  long distFrente = leerDistancia();
  Serial.print("Distancia frente: "); Serial.println(distFrente);

  if (distFrente < DISTANCIA_PELIGRO && distFrente > 0) {
    detener();

    // Mira derecha
    servoHor.write(0); delay(350);
    long distDerecha = leerDistancia();
    Serial.print("Distancia derecha: "); Serial.println(distDerecha);

    // Mira izquierda
    servoHor.write(180); delay(350);
    long distIzquierda = leerDistancia();
    Serial.print("Distancia izquierda: "); Serial.println(distIzquierda);

    // Vuelve al centro
    servoHor.write(90); delay(150);

    // Decide giro
    if (distDerecha > distIzquierda && distDerecha > 20) {
      derecha(); delay(TIEMPO_GIRO);
      Serial.println("Girando a la derecha");
    } else if (distIzquierda > distDerecha && distIzquierda > 20) {
      izquierda(); delay(TIEMPO_GIRO);
      Serial.println("Girando a la izquierda");
    } else {
      atras(); delay(TIEMPO_ATRAS);
      Serial.println("Retrocediendo");
    }
    detener();
  } else {
    adelante();
  }

  delay(30);
}
