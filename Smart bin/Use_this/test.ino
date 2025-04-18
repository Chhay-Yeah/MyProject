#include <Servo.h>

Servo tap_servo;

#define dirPin 2
#define stepPin 3
#define stepsPerRevolution 6400

const int option1 = stepsPerRevolution / 4;  // 1600 steps
const int option2 = stepsPerRevolution / 2;  // 3200 steps
const int option3 = ( stepsPerRevolution) / 4;  // 4800 steps
const int option4 = stepsPerRevolution/2;  // 6400 steps
const int sensor_value = 1;
int servo_pin = 5;

void setup() {
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  
  tap_servo.attach(servo_pin);
}

void moveStepper(int steps, bool forward) {
  digitalWrite(dirPin, forward ? HIGH : LOW);
  for (int i = 0; i < steps; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(200);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(200);
  }
}

void operateServo() {
  tap_servo.write(180);  // Move servo to 180 degrees
  delay(1000);           // Wait 1 second
  tap_servo.write(0);    // Move servo back to 0 degrees
  delay(1000);           // Wait 1 second
}

void loop() {
  if(sensor_value ==1 ){
   moveStepper(option1, true);
   delay(1000);
   operateServo();
   delay(1000);
   moveStepper(option1, false);
   
  }
  

}
