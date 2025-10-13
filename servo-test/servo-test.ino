#include <Servo.h>

#define SERVO_HOR A3  // Servo horizontal (derecha/izquierda)
#define SERVO_VER A4  // Servo vertical (arriba/abajo)

Servo servoHor;
Servo servoVer;

void setup() {
  servoHor.attach(SERVO_HOR);
  servoVer.attach(SERVO_VER);
  Serial.begin(9600);
}

void loop() {
  // Mover servo horizontal de 0° a 180°
  Serial.println("Servo horizontal: 0° a 180°");
  for(int pos = 0; pos <= 180; pos += 10) {
    servoHor.write(pos);
    delay(200);
  }
  for(int pos = 180; pos >= 0; pos -= 10) {
    servoHor.write(pos);
    delay(200);
  }

  // Mover servo vertical de 0° a 180°
  Serial.println("Servo vertical: 0° a 180°");
  for(int pos = 0; pos <= 180; pos += 10) {
    servoVer.write(pos);
    delay(200);
  }
  for(int pos = 180; pos >= 0; pos -= 10) {
    servoVer.write(pos);
    delay(200);
  }
}