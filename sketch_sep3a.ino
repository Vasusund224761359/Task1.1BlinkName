#include <Servo.h> 

Servo myservo; 
#define servoPin 9 

void setup() {
  myservo.attach(servoPin); 
}

void loop() {
  
  myservo.write(45); 
  delay(1000); 

  myservo.write(90); 
  delay(1000); 

  myservo.write(135); 
  delay(1000); 

  myservo.write(180); 
  delay(1000); 

  myservo.write(0); 
  delay(1000); 

  
  for (int angle = 0; angle <= 180; angle++) {
    myservo.write(angle); 
    delay(15); 
  }

  for (int angle = 180; angle >= 0; angle--) {
    myservo.write(angle); 
    delay(15); 
  }

  delay(1000); 
}


