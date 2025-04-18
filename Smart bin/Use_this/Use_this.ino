#include <Servo.h>

Servo tap_servo;

#define dirPin 2
#define stepPin 3
#define stepsPerRevolution 6400

const int option1 = 800;  // 1600 steps
const int option2 = 2400;  // 3200 steps
const int option3 = 3200;  // 4800 steps
const int option4 = 4000;  // 6400 steps
int sensor_pin = 7;
int servo_pin = 8;
int user_option;

void setup() {
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(sensor_pin, INPUT);
  tap_servo.attach(servo_pin);

  // Initialize Serial Monitor
  Serial.begin(9600);
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
  user_option = digitalRead(sensor_pin);
  if (user_option>0) {
    Serial.println(user_option);
  
    switch (user_option) {
      case 0:
        moveStepper(option1, true);
        operateServo();
        moveStepper(option1, false);
        break;
      case 1:
        moveStepper(option2, true);
        operateServo();
        moveStepper(option2, false);
        break;
      case 3:
        moveStepper(option1, false);
        operateServo();
        moveStepper(option1, true);
        break;
      case 4:
        moveStepper(option2, false);
        operateServo();
        moveStepper(option2, true);
        break;
      default:
       
        break;
    }

    Serial.println("Enter a number (1-4) to select an option:");
  }
}
