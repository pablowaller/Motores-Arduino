#define dirPin 2  
#define stepPin 3 
#define enablePin 4 

void setup() {
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH); 
}

void loop() {
  digitalWrite(dirPin, HIGH); 
  for (int i = 0; i < 200; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(300); 
    digitalWrite(stepPin, LOW);
    delayMicroseconds(300); 
  }
  delay(60000); 

  digitalWrite(dirPin, LOW); 
  for (int i = 0; i < 100; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(600); 
    digitalWrite(stepPin, LOW);
    delayMicroseconds(600); 
  }
  delay(30000); 
}
