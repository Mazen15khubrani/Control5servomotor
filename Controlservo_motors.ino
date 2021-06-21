#include <Servo.h>

// val= valus, pot = potentiometers

//define the servos
Servo moto1;
Servo moto2;
Servo moto3;
Servo moto4;
Servo moto5;

//define the potentiometers
int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;
int pot5 = A4;

//variables to read the values from the analog pin
int valpot1;
int valpot2;
int valpot3;
int valpot4;
int valpot5;

void setup(){
  //attaches the servos
 	 moto1.attach(1);
	 moto2.attach(2);
 	 moto3.attach(3);
 	 moto4.attach(4);
 	 moto5.attach(5);
}

void loop(){
  //read thr valuse from the potentiometers 
    valpot1 = analogRead(pot1);
 	valpot1 = map(valpot1,0,1023,0,180);
	moto1.write(valpot1);
	delay(15);
  
	valpot2 = analogRead(pot2);
	valpot2 = map(valpot2,0,1023,0,180);
	moto2.write(valpot2);
	delay(15);
  
	valpot3 = analogRead(pot3);
	valpot3 = map(valpot3,0,1023,0,180);
	moto3.write(valpot3);
	delay(15);
  
	valpot4 = analogRead(pot4);
	valpot4 = map(valpot4,0,1023,0,180);
	moto4.write(valpot4);
	delay(15);
  
	valpot5 = analogRead(pot5);
	valpot5 = map(valpot5,0,1023,0,180);
	moto5.write(valpot5);
	delay(15);
	}
