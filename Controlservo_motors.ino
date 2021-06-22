#include <Servo.h>
//val = Values
//define the servos
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;

//define the potentiometers
int potentiometers1 = A0;
int potentiometers2 = A1;
int potentiometers3 = A2;
int potentiometers4 = A3;
int potentiometers5 = A4;

//val = Values
//variable to read the values from the analog pin
int valpotentiometers1;
int valpotentiometers2;
int valpotentiometers3;
int valpotentiometers4;
int valpotentiometers5;

void setup(){
  //attaches the servos
    motor1.attach(1);
   motor2.attach(2);
   motor3.attach(3);
   motor4.attach(4);
   motor5.attach(5);
}

void loop(){
  //read thr valuse from the potentiometers 
    valpotentiometers1 = analogRead(potentiometers1);
  valpotentiometers1 = map(valpotentiometers1,0,1023,0,180);
  motor1.write(valpotentiometers1);
  delay(15);
  
  valpotentiometers2 = analogRead(potentiometers2);
  valpotentiometers2 = map(valpotentiometers2,0,1023,0,180);
  motor2.write(valpotentiometers2);
  delay(15);
  
  valpotentiometers3 = analogRead(potentiometers3);
  valpotentiometers3 = map(valpotentiometers3,0,1023,0,180);
  motor3.write(valpotentiometers3);
  delay(15);
  
  valpotentiometers4 = analogRead(potentiometers4);
  valpotentiometers4 = map(valpotentiometers4,0,1023,0,180);
  motor4.write(valpotentiometers4);
  delay(15);
  
  valpotentiometers5 = analogRead(potentiometers5);
  valpotentiometers5 = map(valpotentiometers5,0,1023,0,180);
  motor5.write(valpotentiometers5);
  delay(15);
  }
