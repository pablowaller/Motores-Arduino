#include <Servo.h>
Servo E;

#define X_STEP_PIN 54
#define X_DIR_PIN 55
#define X_ENABLE_PIN 38
#define X_MIN_PIN 3
#define X_MAX_PIN -1 // El PIN 2 se utiliza

void setup() { 
  pinMode(X_DIR_PIN, OUTPUT);
  pinMode(X_STEP_PIN, OUTPUT);
  pinMode(X_ENABLE_PIN, OUTPUT);
  digitalWrite(X_ENABLE_PIN, LOW);
}

void loop() { 
  digitalWrite(X_DIR_PIN, HIGH); 
  
  for (int i = 0; i <= 3400; i++) {
    digitalWrite(X_STEP_PIN, HIGH); 
    delayMicroseconds(500); 
    digitalWrite(X_STEP_PIN, LOW);
    delayMicroseconds(500);  // Retardo adicional para asegurar un tiempo mínimo entre pulsos
  } 
  
  delay(1000);

  digitalWrite(X_DIR_PIN, LOW); 
  
  for (int i = 0; i <= 3400; i++) {
    digitalWrite(X_STEP_PIN, HIGH);
    delayMicroseconds(500); 
    digitalWrite(X_STEP_PIN, LOW);
    delayMicroseconds(500);  // Retardo adicional para asegurar un tiempo mínimo entre pulsos
  }
  
  delay(1000);
}
