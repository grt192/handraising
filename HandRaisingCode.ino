#include <Servo.h> 
Servo arm;
boolean up = false;
void setup() {
  // put your setup code here, to run once:
arm.attach(7);
arm.write(0);
pinMode(10, INPUT);
digitalWrite(10, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(10) == LOW){
  if (up){
    arm.write(90);
  } else {
    arm.write(0);

  }
  delay(750);
  up = !up;


}
}
