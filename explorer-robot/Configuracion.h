// ==== Pines L298N ====
#define ENA 2
#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6
#define ENB 7

// ==== Servo ====
#define SERVO_HOR A3

// ==== Ultrasonico ====
#define TRIG_PIN 10
#define ECHO_PIN 11

// ==== Sensores IR ====
#define IR_IZQ 8
#define IR_DER 12

// ==== Parámetros ajustables ====
const int VELOCIDAD_MOTOR = 150;      // Velocidad general
const int DISTANCIA_PELIGRO = 35;     // Distancia mínima para evitar obstáculo
const int TIEMPO_GIRO = 400;          // Tiempo de giro
const int TIEMPO_ATRAS = 500;         // Tiempo de retroceso
