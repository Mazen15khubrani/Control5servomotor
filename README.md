# Control servo motors
This is an Arduino programming project using Arduino Uno circuit.
In this project, I used 5 servo motors and programmed and controlled them through 5 Potentiometers  for each Potentiometer  motor to move the robot arm.
I tested this project using a simulator (TinkerCad).
The motors are programmed to move between 90° and 180 .
                 Explanation: 
First I define the variable val = Values.
After that I define the Servo object . 
Then I defined the variable Potentiometers with the analog inputs from A0 T0 A4 so that each Potentiometers has a digital input in which to read the data through it using the variable type int.
Then I defined the variable valpotentiometers = Value potentiometers without putting a value to it.
Then, with the motors, I used digital outputs from 1 to 5 and used the command (attach) to tell the Arduino to the connected ports.
After that, I set a value for the variable valpotentiometers, which is the reading resulting from the analog inputs from A0 to A4 and I used the analog read command To tell the Arduino about that.
Then I determined the angle of rotation of the motor which is 180 degrees using the map function based on the value read from the pin which is an integer located between 0 and 1023.
Then I used the command write to send the data of the variable valpotentiometers to the servo motor .
Finally I put a delay of 15 milliseconds so that the angle changes from 0 to 180 degrees by 1 degree every 15 milliseconds.

Finally, thanks a lot.
