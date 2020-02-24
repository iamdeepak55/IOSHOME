#include <Servo.h>  // Include the Servo library

int servoPin = D1;  // Declare the Servo pin
int sensor = D7;              // the pin that the sensor is atteched to
int state = LOW;             // by default, no motion detected
int val = 0;                 

Servo Servo1;  // Create a servo object
void setup() {
  Serial.begin(9600);
pinMode(sensor, INPUT);    
Servo1.attach(servoPin); // We need to attach the servo to the used pin number
}
void loop(){
  val = digitalRead(sensor);   // read sensor value
  if (val == HIGH) {           // check if the sensor is HIGH
    
Servo1.write(90); // Make servo go to 180 degrees
delay(2000);
      Serial.println("Motion detected!"); 
            } 
  else {
       Servo1.write(0); // Make servo go to 0 degrees

      // turn LED OFF
      delay(200);             // delay 200 milliseconds 
      
     
        Serial.println("Motion stopped!");
             // update variable state to LOW
    }
  }
