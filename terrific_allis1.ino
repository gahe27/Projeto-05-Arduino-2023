#include <Servo.h>

Servo servo1;
Servo servo2; // Cria um objeto Servo
int potPin1 = A0;  // Pino analógico utilizado pelo potenciômetro
int potPin2 = A1;

void setup() {
  servo1.attach(3);
  servo2.attach(4); // Anexa o servo ao pino digital 9
}

void loop() {
  int pos1 = map(analogRead(potPin1), 0, 1023, 1, 90);
  int pos2 = map(analogRead(potPin2), 0, 1023, 90, 180);// Lê o valor do potenciômetro e mapeia para o intervalo de 0 a 180
  servo1.write(pos1);
  servo2.write(pos2); // Define a posição do servo com base no valor do potenciômetro
  delay(15);  // Pequeno atraso para evitar flutuações rápidas
}