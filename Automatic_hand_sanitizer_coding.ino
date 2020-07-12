 /* Controlling a servo position using a potentiometer (variable resistor) */

#include <Servo.h>
  Servo myservo1; // create servo object to control a servo
   Servo myservo2; // create servo object to control a servo
   const int trigPin = 11;
const int echoPin = 9;
// defines variables
long duration;
int distance;

  

void setup() {
   myservo1.attach(2); // attaches the servo on pin 9 to the servo object
   myservo2.attach(3); // attaches the servo on pin 9 to the servo object
   pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
}

void loop() {
   digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2; 
// Reads the echoPin, returns the sound wave travel time in microseconds
if(distance<5 )
      
  {
    delay(3 000);
    myservo1.write(180); // sets the servo position according to the scaled value}
   myservo2.write(180); // sets the servo position according to the scaled value
   delay(3000);
   myservo1.write(0); // sets the servo position according to the scaled value}
   myservo2.write(0); 
   delay(1000);

 }

Serial.print("Distance: ");
Serial.println(distance);
}

