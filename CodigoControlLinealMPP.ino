const int dirPin = 2;
const int stepPin = 3;
const int enablePin = 4;
const int ledPin = 13;

const int stepsPerRevolution = 200; 
const int stepsPerCm = stepsPerRevolution / 10; 

void moveMotor(int direction, int steps) {
  digitalWrite(dirPin, direction);
  
  for (int i = 0; i < steps; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }
}

void setup() {
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(enablePin, HIGH); 
}

void loop() {

  int steps = 3 * stepsPerCm;
  for (int i = 0; i < steps; i++) {
    moveMotor(HIGH, 1);
    delay(10);
  }
  delay(3000); 
  
  digitalWrite(ledPin, HIGH); 
  delay(1000);
  digitalWrite(ledPin, LOW); 
  
  steps = 5 * stepsPerCm;
  for (int i = 0; i < steps; i++) {
    moveMotor(HIGH, 1);
    delay(10);
  }
  delay(1000); 
  
  digitalWrite(ledPin, HIGH); 
  delay(1000);
  digitalWrite(ledPin, LOW); 
  
  int accelSteps = stepsPerCm; 
  int moveSteps = 8 * stepsPerCm; 
  int decelSteps = stepsPerCm;
  
  for (int i = 0; i < accelSteps; i++) {
    moveMotor(LOW, 1);
    delay(10);
  }
  
  for (int i = 0; i < moveSteps; i++) {
    moveMotor(LOW, 1);
    delay(1000);
  }
  
  for (int i = 0; i < decelSteps; i++) {
    moveMotor(LOW, 1);
    delay(10);
  }
  
  delay(2000); 
  
  digitalWrite(ledPin, HIGH); 
  delay(1000);
  digitalWrite(ledPin, LOW); 
}
