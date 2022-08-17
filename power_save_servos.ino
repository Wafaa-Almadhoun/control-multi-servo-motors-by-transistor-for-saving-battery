#include <Servo.h>
// servos digtal pins attach 

int servo1pin = 9;
int servo2pin = 10; 
int servo3pin = 11; 

// servos power control by transistor pins attach 

int servo1control = 3; 
int servo2control = 5;
int servo3control = 6;

Servo Servo1, Servo2, Servo3 ;
void setup() {
  
  // We need to attach the servo to the used pin number

 pinMode( servo1control, OUTPUT);           
 pinMode( servo2control, OUTPUT);           
 pinMode( servo3control, OUTPUT);           

  Servo1.attach(servo1pin);
  
  Servo2.attach(servo2pin);
  
  Servo3.attach(servo3pin ); 
  
  

} void loop(){

  

digitalWrite(servo1control, HIGH);       // turn ON SERVO1
Servo1.write(90);
  delay(1000);
 Servo1.write(0);
delay(1000); 
digitalWrite(servo1control, LOW);      // turn OFF SERVO1

digitalWrite(servo1control, LOW);      // turn OFF SERVO1




digitalWrite(servo2control, HIGH);       // turn ON SERVO2
Servo2.write(90);
delay(1000);
Servo2.write(0); 
delay(1000);
digitalWrite(servo2control, LOW);      // turn OFF SERVO2



digitalWrite(servo3control, HIGH);       // turn ON SERVO3
Servo3.write(90);
delay(1000);
Servo3.write(0);
delay(1000);
digitalWrite(servo3control, HIGH);       // turn ON SERVO3

} 
