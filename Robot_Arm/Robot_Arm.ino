#include <Servo.h> 

Servo myservo0;  // create servo object to control a servo 
Servo myservo1;  // create servo object to control a servo 
Servo myservo2;  // create servo object to control a servo 
Servo myservo3;  // create servo object to control a servo 
Servo myservo4;  // create servo object to control a servo 
 
int potpin0 = 0;  // analog pin used to connect the potentiometer
int val0;    // variable to read the value from the analog pin 
int potpin1 = 1;  // analog pin used to connect the potentiometer
int val1;    // variable to read the value from the analog pin 
int potpin2 = 2;  // analog pin used to connect the potentiometer
int val2;    // variable to read the value from the analog pin 
int potpin3 = 3;  // analog pin used to connect the potentiometer
int val3;    // variable to read the value from the analog pin 
int potpin4 = 4;  // analog pin used to connect the potentiometer
int val4;    // variable to read the value from the analog pin 
 
void setup() 
{ 
  myservo0.attach(9);  // attaches the servo on pin 9 to the servo object 
  myservo1.attach(8);  // attaches the servo on pin 9 to the servo object 
  myservo2.attach(7);  // attaches the servo on pin 9 to the servo object 
  myservo3.attach(6);  // attaches the servo on pin 9 to the servo object 
  myservo4.attach(5);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
  val0 = analogRead(potpin0);            // reads the value of the potentiometer (value between 0 and 1023) 
  val0 = map(val0, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservo0.write(val0);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 
  
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023) 
  val1 = map(val1, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservo1.write(val1);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 
  
  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023) 
  val2 = map(val2, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservo2.write(val2);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 
  
  val3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023) 
  val3 = map(val3, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservo3.write(val3);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 
  
  val4 = analogRead(potpin4);            // reads the value of the potentiometer (value between 0 and 1023) 
  val4 = map(val4, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservo4.write(val4);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 
}
