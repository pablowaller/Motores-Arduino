#include <Servo.h>
Servo E;

#define X_STEP_PIN 54
#define X_DIR_PIN 55
#define X_ENABLE_pin 38
#define X_MIN_PIN 3
#define X_MAX_PIN -1 //PIN 2 is used

void setup(){ 
  pinMode(X_DIR_PIN, OUTPUT);
  pinMode(X_STEP, PIN, OUTPUT);
  pinMode(X_ENABLE_PIN, OUTPUT);
  digitalWrite(X_ENABLE_PIN, LOW):
}

void loop() { 

  digitalWrite(X_DIR_PIN, HIGH); 
  
  for(int i=0; i<=3400; i++) {
    digitalWrite(X_STEP PIN, HIGH); 
    delayMicroseconds(500); 
    digitalWrite(X_STEP PIN, LOW);
  } 
  
  delay(1000);

  digltalWrite(X_DIR_PIN, LOW); 
  
  for(lnt = 0: <= 3400; i++){
    digitalWrIte(X_STEP_PIN, HIGH);
    delay(1);
    digitalWrite(X_STEP_PIN, LOW);
  }
  
  delay(1000);

}
